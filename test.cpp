#define _CRT_SECURE_NO_WARNINGS//��Ҫ����ͷ�ļ�֮ǰ
#include<stdio.h>
#include<string.h>
#include<windows.h>
int Add(int x,int y) {
	return (x + y);
}//�Ӻ���
void print_no_pointer_num(int n) {
	printf("%d\n", n);
}//1����ӡ���֣���ָ��
void print_pointer_num(int* n) {
	printf("%0xd\n", n);
	printf("%zu\n", *n);
}//2����ӡ��ַ�����ֱ���ȡ��ַ
int my_strlen(char* x) {
	int count = 0;
	while (*x != '\0') {
		count++;
		x++;//������һ��ָ��
	}
	return count;
}//3���Զ����strlen
int my_strlen1(char* n) {
	if (*n != '\0') {
		return 1 + my_strlen1(n + 1);//���ҵݹ�
	}
	else return 0;

}//4��������������ͬ
void exchange_num_pointer(int* x,int* y){
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}//5��ָ�����ͻ�������(����)
//int exchange_num(int x, int y) {
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//	return x,y;
//}//6����������(��ʱ�����ã���Ϊһ���������ض��ֵ�Ҳ���ָ��ķ���Ŀǰ���˲�֪)
int Greatest_Common_Factor(int x, int y) {
	int temp = 0;
	if (x < y)//�Ѵ�����ַ�ǰ��
		exchange_num_pointer(&x, &y);
	if (y % x == y && x % y == 0) {
		return y;
	}
	else if (y % x == y && x % y != 0) {
		while (x % y != 0) {
			temp = x % y;
			x = y;
			y = temp;
		}
		return temp;
	}
}//7���������������
//21.define���峣���ͺ�
//define�ĺ��е�x��y�������ͣ�ֻ�������滻
//#define add(x,y)(x+y)
//int main() {
//	int a = 1;
//	int b = 2;
//	int z = add(a, b);
//	printf("%d\n", z);
//	return 0;
//}
//23.ָ��
//�Ĵ���>>���ٻ���>>�ڴ�>>Ӳ��
//ÿ���ڴ浥Ԫ��һ���ֽ�
//int main() {
// //	printf("%d\n", sizeof(float));
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof(double));
//	//printf("%d\n", sizeof(long));
//	//printf("%d\n", sizeof(char));
//	////44841`
//	int a = 10;//���ڴ�Ҫ4���ֽ�
//	//&a;
//	//%p���ڴ�ӡ��ַ
//	printf("%p\n", &a);
//	int* p = &a;//int˵��pָ�����int���͵�
//	//p��ָ�����,�Ǵ�ŵ�ַ��λ�ñ���
//	char b[] = {"aaa"};
//	char* pb= b;
//	printf("%p %p\n", p, pb);
//	*p;//*�����ò���������Ϊͨ��p�д�ĵ�ַ���ҵ���ָ�Ķ��󣬴˴�*p��Ϊp��ָ��Ķ���a
//
//
//	return 0;
//	//�����ܿ����ڴ�ͼ���
//}
//int main() {
//	printf("%zd\n", sizeof(short*));
//	//sizeof �����%zd��%zu��ӡ
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(long*));
//	printf("%zd\n", sizeof(double*));
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(float*));
//	int* p1, * p2, *p3;//ָ������
//	return 0;
//}
//24.�ṹ��
//struct�ѵ�һ���͵��������һ��
//ѧ������
//struct xtu {
////	//��Ա
//	char name[10];//�������е�����ָ���ǵ��������ĳ��ȣ�����������ж��ٸ�name������һ��name���ж೤
//	int age;
//	char gender[10];
//	int height;
//};//����ֺŲ��ܶ�
//void print(struct xtu* p) {
//	printf("%s %d %s %d\n", (*p).name, (*p).age, (*p).gender, (*p).height);
//	//�ṹ��ָ�����->��Ա����ʹ��ǰ���ǵõ��˽ṹ��ָ�����
//	printf("%s %d %s %d\n", p->name, p->age, p->gender, p->height);
//}
//int main() {
//	struct xtu ly = {"ly",22,"male",188};
//	struct xtu zgm = { "zgm",23,"female", 188};
//	struct xtu lfy = { "lfy",22,"male",182 };
//	struct xtu zwq = { "zwq",22,"male",188 };
//	struct xtu tsh = { "tsh",22,"male",190 };
//	struct xtu lxz = { "lxz",23,"male",168 };
//	//   .   ���������ڷ��ʽṹ�����
//	//printf("%s %d %s %d\n",ly.name, ly.age, ly.gender, ly.height);
//	print(&ly);
//	print(&zgm);
//	print(&lfy);
//	print(&zwq);
//	print(&tsh);
//	print(&lxz);
//	//define ���ǹؼ��� ��Ԥ����ָ��
//	return 0;
//}
//24.if   switch���
//int main() {
//	//if(ture){content;}   С������Ϊtureִ��content ��false��ִ��
//	//һ���Ⱥ��Ƿ�ֵ  �����Ⱥ����ж��Ƿ���ȣ����Ϊ�棬����Ϊ��
//	//int a = 10;
//	//int b = 100;
//	//int c = 1000;
//	//int z = a>b ? b : c;
//	//printf("%d\n", z);
//	//if ��ֻ��һ����� ���üӴ�����
//	int age = 29;
//	if (age>=18&&age<28) {//(18 <= age < 28)����д���Ǵ���ģ�
//		//��Ϊǰ���18<=ageΪ�棬���1��������1<28,Ϊ�棬��ʵ���ϴ����Ѳ�������
//		printf("����\n");//һ���������������ľ���һ�������
//	}
//	//��û���������Ƶ�����£�else ������� if ������
//	return 0;
//}
//int test() {
//	int a = 2;
//	if (a == 3) {//if(3==a)�����ͬ��������д���Է�ֹ©д�Ⱥ�
//		return 1;
//	}
//	return 0;//��Ȼ��δ��else��������ͬ�����������Ķ���Ӧ��ǰ�����else
//}
//int main(){
//	int x = test();
//	printf("%d\n", x);
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	if (a % 2 == 1) {
//		printf("������Ϊ����\n");
//	}
//	else {
//		printf("������Ϊż��\n");
//	}
//	return 0;
//}
//int main() {
//	int a = 0;
//	while (a < 100) {
//		a++;
//		if (a%2==1) {
//			printf("%d,����Ϊ����\n",a);
//		}
//		else {
//			printf("%d,����Ϊż��\n",a);
//		}
//	}
//	return 0;
//}
//int main() {
//	//switch���
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)//������float 
//	{
//		case 1 :
//			printf("����һ\n");
//			break;
//		case 2:
//			printf("���ڶ�\n");
//			break;
//		case 3:
//			printf("������\n");
//			break;
//		case 4:
//			printf("������\n");
//			break;
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//			printf("������\n");
//			break;
//		case 7:
//			printf("������\n");
//			break;
//	}
//	return 0;
//}
//int main() {
//	//switch���
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)//������float 
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��ĩ\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}
//27.while��� 
//int main() {
//	int a = 0;
//	while (a < 10) {
//		a++;
//		//break Ҳ������whileѭ��,������ֹ��ǰѭ��
//		//continue������������ǰѭ���ĺ���Ĵ��룬��������´�ѭ����������������ѭ���е�ĳһ��
//		if (5 == a)
//			continue;
//		printf("%d\n", a);
//	}	
//	return 0;
//}
//int main() {
//	//getchar��ȡASCII��ֵ������ͨ�����̣���putchar��ӡASCII��ֵ��Ӧ���ַ�
//	//int ch = getchar();
//	//printf("%d\n", ch);
//	//putchar(ch);
//	// ���¿��������������
//	//int c = 0;
//	//while ((c = getchar()) != EOF) {
//	//	putchar(c);
//	//	//printf("%d\n", c);
//	//}
//	//EOF   end of file �ļ�����  ASCII��ֵͨ��Ϊ-1
//	//�޷��򿪽���д���͵Ĵ�������Ϊ���������еĳ�����δ�ر�
//	//scanf�ڻ�ȡ�ǲ�������\n����getchar ��
//	//������Ļس��ᱻ�����´����루\n��
//	//�����������ʱ�����м�Ӹ�getchar()���ϼ򵥵������
//	//������������ã���
//	//while ((ch=getchar()) != '\n'){   //�ѵ�\n�Ķ���ȫ���������������볬����Ҫ�Ķ���
//	//		;	//�����κβ���
//	// }
//	return 0;
//}
//int main() {
//	//scanf�ڻ�ȡʱ����Կո���I LOVE YOU ֻ�ܻ�ȡ�� I
//	//char ch[10];
//	//scanf("%s\n", &ch);
//	int c = getchar();
//	//printf("%s\n", ch);
//	putchar(c);
//	return 0;
//}
/////////////////////////////////////I can do it!
//ϰ��
//int main() {
//	int num = 0;
//	int arr[] = {73,32,99,97,110,32,100,111,32,105,116,33};
//	int size = sizeof(arr) / sizeof(arr[1]);
//	while (num < size) {
//		putchar(arr[num]);
//		num++;
//	}
//	return 0;
//}
//pritnf("%c\n",'a');
//pritnf("%c\n",97);
//�ȼ�
//ϰ��2.����һ���˵ĳ������ڣ����������գ����������е��ꡢ�¡��շֱ����
//���ݷ�Χ�������1990<=y<=2015,�·�����1<=m<=12��������1<=d<=30;
//������������ֻ��һ�У��������ڣ����������գ�������֮��������޷ָ���
//��������У���һ������꣬�ڶ�������£�����������գ���������պ���Ϊ��λ����������ǰ����0
//int main() {
//	int y = 0, m = 0, d = 0;
//	scanf("%4d%2d%2d", & y , & m ,& d);
//	if (y >= 1990 && y <= 2015 && m >= 1 && m <= 12 && d >= 1 && d <= 30) {
//		printf("year=%d\n", y);
//		printf("month=%02d\n", m);//���Ͳ��룬��0��λ
//		printf("day=%02d\n", d);
//	}
//	return 0;
//}
// ϰ��3
//int  main() {
//	int a = 0;
//	int stu_num = 0;
//	int math = 0;
//	int eng = 0;
//	int phy = 0;
//	scanf("%d;%d,%d,%d", &stu_num, &math, &eng, &phy);
//	printf("The each subject score of No.%d is %d,%d,%d.\n",stu_num, math ,eng ,phy);
//}
//float a=0.0f���ñ�������Ϊ����Ϊfloat���͵�
//int main() {
//	//�ھֲ���������static���εı������˾ֲ�����֮����Ȼ����ԭ����ֵ���ٴν���˺���ʱ�����ᱻ���¸�ֵ
//	int n = printf("hello world!");
//	printf("\n%d\n", n);
//	return 0;
//}
//int main() {
//
//	int n = sizeof(char*);
//	printf("%d\n", n);//64λ���Ե�ָ��sizeΪ8��32λ�������Ϊ4
//
//}
//int main() {
//	int arr[4] = {0};
//	int n = 0;
//	while (n < 4) {
//		scanf("%d", &arr[n]);
//		n++;
//	}
//	n = 1;
//	int max = arr[0];
//	while (n < 4) {
//		if (arr[n] > max) {
//			max = arr[n];
//		}
//		n++;
//	}
//	printf("%d", max);
//	return 0;
//}
//int main() {
//	int a = 0;
//	scanf("%d\n", &a);//\n�Ĵ��ڻ��һ������ӻس�
//	printf("%d\n", a);
//}
//��������Ĭ��0.0Ϊdouble����
//33.forѭ��
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		//i��������ѭ���ڸ�
//		printf("%d\n",i);
//	}
//	return	0;
//}
//int main() {
//	for (;;) {//forѭ���жϲ���ʡ�ԣ������������
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main() {
//	//C99  ��֧��for(int i=0;;)
//	//c++֧�ִ����﷨
//	//�����ǰ�߳�ʼ��
//
//	return 0;
//
// }
//34.do while���
// ����ִ��һ��
// for �õ����
//int main() {
//	int num = 1;
//	do {
//		printf("%d\n", num);
//		num++;
//	}
//	while (num <= 10);
//	return 0;
//}
//36.��ϰ ����n�Ľ׳�
//int main() {
//	int n = 0;
//	int num = 1;
//	scanf("%d", &n);
//	for (; n > 0; n--) {
//		num *= n;
//	}
//	printf("%d\n", num);
//	return 0;
//}
//int main() {
//	int ret,n,i,k;
//	int sum = 0;
//	scanf("%d", &k);
//	for (i = 1; i < k+1; i++) {
//		ret = 1;
//		for (n = 1; n <= i; n++) {
//			ret *= n;
//		}
//		sum += ret;
//		ret = 1;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	//�ҵ�5�±�
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		if (arr[i] == 5) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int main() {
//	int arr[] = {1,1,2,3,1};
//	//һ����������4�ֽ�
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//welcome to los antols!
//int main() {
//	char ch[] = {"welcome to los antols!"};
//	char ch2[] = {"######################"};
//	int left = 0;
//	int right =strlen(ch)-1;
//	while (left <= right) {
//		ch2[left] = ch[left];
//		ch2[right] = ch[right];
//		printf("%s\n", ch2);
//		Sleep(1000);//S��Ҫ��д
//		system("cls");//ϵͳ�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", ch2);
//	return 0;
//}
//int main() {
//	printf("�û�����123321123�����\n");
//	printf("��¼��������룺\n");
//	char password[200] = "0";
//	int n = 0;
//	//�Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ�ÿ⺯�� strcmp(string compare)
//	//strcmp����ֵΪ0��ʱ��˵���ַ������
//	for (n = 3; n > 0; n--) {
//		scanf("%s", &password);
//		if (strcmp(password, "123456") == 0 ) {
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else {
//			printf("��������㻹��%d�λ���\n���������룺", n-1);
//		}
//	}
//	if (n == 0) {
//		printf("��¼ʧ��\n");
//	}
//	return 0;
//}
//39.��������Ϸ
#include<stdlib.h>
#include<time.h>
//time_t//�Ǹ�����
//void game()
//{
//	int random = rand()%100 + 1;
//
//	int input = 0;
//
//	while (input != random) {
//		//printf("%d\n", random);
//		scanf("%d", &input);
//		if (input > random)
//			printf("�´���\n�����");
//		else if (input < random)
//			printf("��С��\n�����");
//	}
//	//int x = 0;
//	//printf("�²���ȷ����ȷ����Ϊ%d\n�Ƿ������Ϸ����������1������������2���˳�", random);
//	//while (x != 1 && x != 2) {
//	//	scanf("%d", &x);
//	//	if (x == 1) {
//	//		return 1;
//
//	//	}
//	//	else if (x == 2) {
//	//		return 2;
//	//	}
//	//}
//}
//int main()
//{		//���������������
//	//RAND_MAXΪ32767 ���ɵ����ֵ
//	srand((unsigned int)time(NULL));//time(ָ��) ������Ӧ��Ϊָ��
//	//��������rand������㣬ֻҪ����һ�ξ���
//	//����û�У���ÿ������ʱ�����������������ͬ��
//	//int ret = game();
//	//printf("%d\n", ret);
//	//do {
//		
//		game();
//		
//	//}
//	//while (game() == 1);
//	return 0;
//}
//int main() {
//	//system("shutdown -s -t 60");//60���ڹػ�
//	//system("shutdown -a");
//	
//	return 0;
//}
//39.40.����
//�⺯��,,,,,ʹ��ʱͷ�ļ�
//int main() {
////	strcmp;
////	//null character  �� \0
////	char arr1[20] = {0};
////	char arr2[20] = "hello";
////	strcpy(arr1,arr2);
////	printf("%s\n", arr1);
//	char arr1[20] = { "hello world" };
//	memset(arr1+6, 'x', 5);
//	printf("%s\n", arr1);
////memset�洢����
//	return 0;
//}
//int cmp(int x,int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	scanf("%d %d", &a, &b);
//
//	int max = cmp(a, b);
//	printf("%d\n", max);
//	return 0;
//
//void  swap(int* px,int* py) {//������Ϊ��ʽ�������˴κ������н�������ʽ������������
//	int mid = 0;
//	mid = *px;
//	*px = *py;
//	*py = mid;
//}
//int main()
//{
//	//����ָ��İ汾����swap�����У�xy�Ի�ֻ����ʽ����������ʵ�ʲ�����û�иı�
//	int a = 0;
//	int b = 0;
//
//
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("a=%d  b=%d\n", a, b);
//	return 0;
//}
//һ��������ֻ����һ��main
//int main() {
//	//��ֵ���ò���Ӱ��ʵ��
//
//	return 0;
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int m = 0;
//	for (; n > 0; n--) {		
//		m += n ;
//	}
//	printf("%d\n", m);
//	return 0;
//}
//int x(int n) {
//	cnt++;
//	if (n <= 3) {
//		return 1;
//	}
//	else {
//		return x(n - 2) + x(n - 4) + 1;
//	}
//}
//int main()
//{
//	x(x(8));
//	return 0;
//}
//int main() {
//
//	int input = 0;
//	scanf("%d", &input);
//	int i = 1;
//	for (i = 2; i <= input; i++) {
//		if (input != i && input % i == 0) {
//			printf("%d��������\n", input);
//			break;
//		}
//		else if (input == i)
//		{
//			printf("%d������\n", input);
//		}
//		
//	}
//	return 0;
//}//��ʽ������ʵ�ʲ�������ʱ������ͬ  ���Բ�ͬ
//bool����C99����
//�����ڽ���һ������ʱ���õ�������������Ԫ�صĵ�ַ
#include <stdbool.h>
//void  add(int* n) {
//	(*n)++;//�����Ÿı����num��Ӧָ���ֵ��û����ֻ�Ǹı�ָ��
//}
//int main() {
//	//boolֻ������
//	int num = 0;
//	for (int i = 0; i < 10; i++) {
//		add(&num);
//		printf("%d\n", num);
//	}
//	return 0;
//}
//43.����Ƕ�׵���
//����Ƕ�׵��ã�����Ƕ�׶���
//��ʽ����
//int main() {
//	//int len = strlen("abcdef");
//	int a = printf("%d\n", 23);//������23  (���У� 233
//	int a1 = printf("%d", 23);//����a1��ӡ��2
//
//	print_no_pointer_num(a);
//	print_no_pointer_num(a1);
//
//	//print_pointer_num(&len);
//
//	//printf���ص������ӡ���ַ���
//	//�� int  a = printf("%d",22);
//	//a = 2;
//
//	return 0;
//}
//main����
//43.�����������Ͷ���
//int main(int argc,char* argv[],char*envp[]) ///////////////////////////????????????????
//{
//	int a = 0;
//	print_pointer_num(&a);
//	return 0;
//}
//#pragma comment(lib,"��̬������")
// ��̬����԰���Ŀ���һ������ԣ���������->����->��������->��Ϊ.lib����������
//���뾲̬��
//��������һ�����ͷ�ļ��У���ʵ��Ӧ��ʱ
//#pragma onceֻ�ܱ�����һ��
//46.�����ݹ�
//����˼�룺�Ѵ�����ת��ΪС����
//�ݹ��Ҫ����
//1���������������������������ʱ�����ٵݹ�
//2��ÿ�εݹ鶼ҪԽ��Խ�ӽ�������
//void printtest1(unsigned int n) {
//	if (n >= 10) {
//		printtest1(n/10);
//	}
//	printf("%u ", n % 10 );
//}
//int main() {
//	//%u��ӡ�޷�������
//	//%d��ӡ�з�������
//	unsigned int num = 0;
//	scanf("%u", &num);
//	printtest1(num);
//	return 0;
//}
//stack overflowջ���
//ÿһ�κ������û���ջ�����ÿռ�
//int main() {
//	char arr[] = "abc" ;
//	int len =my_strlen(arr);	
//	print_no_pointer_num(len);
//	return 0;
//}
//int main() {
//	char ch[] = "abc";
//	int len = my_strlen1(ch);
//	printf("%d\n", len);
//	return  0;
//}
//48.�ݹ�͵���
//ѭ����һ�ֵ���

//쳲���������
//�ݹ�д��
//int fib(int num = 1) {
//	if (num > 2) {
//		return fib(num - 1) + fib(num - 2);//��λ������ģ���Ҫ���ж��ָ�����㣬������Ч
//	}
//	else if (num == 2) return 1;
//	else return 0;
//}
// 쳲��������и�Ϊ���õ�д��������
// ѭ����һ�ֵ���
//int fib(int num = 1) {
//	int blank1 = 1;
//	int blank2 = 0;
//	int blank3 = 0;
//	if (num > 2) {
//		for (int i = 2; i < num; i++) {
//			blank3 = blank1+blank2;
//			blank2 = blank1;
//			blank1 = blank3;
//		}
//		return  blank3;
//	}
//	else if (num == 2) {
//		return 1;
//	}
//	else return 0;
//}
//int main() {
//	int count = 1;
//	scanf("%d", &count);
//	int fin = fib(count);
//	print_no_pointer_num(fin);
//	return 0;
//}
// 49.������ҵ
// char �������ͼ���
//default ���Է���caseǰ��
//switch���ж�ֻ�������͵�����float���ֲ���
//int main() {
//	int i = 1;
//	for (i; i <= 100; i++) {
//		if(i%3 == 0)
//		print_no_pointer_num(i);
//	}
//	return 0;
//}
//int main() {
//	int a = 1;
//	int b = 2;
//    exchange_num_pointer(&a, &b);
//	print_no_pointer_num(a);
//	print_no_pointer_num(b);
//	return 0;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	print_no_pointer_num(Greatest_Common_Factor(a, b));
//	return 0;
//}
//��С������*���Լ��=����ԭ�����
//int calculate_year(int year) {
//	int count = 0;
//	for (year; year <= 2000; year++) {
//		if (year % 4 == 0) {
//			print_no_pointer_num(year);
//			count++;
//		}
//	}
//	return count;
//}//����ĳ�굽2000�����������
//int main() {
//	int i = 1000;
//	int count = calculate_year(i);
//	printf("1000~2000��䣬����һ����%d��\n",count);	
//}
//int main() {
//	int arr[10] = { 2131,32432,444,555,2143,787,12321,99898,573,7777 };
//	//�ҳ����ֵ
//	int i = 0;
//	int temp = arr[0];
//	for (i = 1; i < 10; i++) {
//		if (arr[i] > temp) {
//			temp = arr[i];
//		}
//	}
//	print_no_pointer_num(temp);
//	return 0;
//}
////%2d�ڴ�ӡ��ʱ��������1λ���������ÿո�ȫ����λ��
//a=(b,c);���c��ֵ����a,���ű��ʽ
//���ھ۵������ʲô������������������������������������
//return 3,4;ֻ�ܷ��غ����4
//���鴫����������ָ�룬���ú���ֱ�Ӹı�ʵ��

//int main() {
//	int arr[] = { 0,1 };
//	int* p1 = &arr[0];
//	int* p2 = &arr[1];
//	printf("%0xd %0xd", p1, p2);
//	return 0;
//}
//sleep ��Windowsϵͳ�е�λΪms
//int main() {
//	int arr[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�����Ĭ��Ϊ0,���ַ�һ��,�Զ�ά����Ҳһ��
//	char ch[10] = { 'a','b','c' };
	//print_no_pointer_num(ch[5]);
	//%p���ڴ�ӡ��ַ
//	int arr1[4][4] = {
//		{1,2,3,4},
//		{2,3,4,5},
//		{3,4,5,6},
//		{4,5,6,7}
//	};//��ά����������������е����֣��ڶ������ܱ�ʡ��
//	int num = 0;
//	for (num = 0; num < 4; num++) {
//			print_no_pointer_num(arr1[num][num]);
//	}
//	print_no_pointer_num(sizeof(arr1));
//	return 0;
//}
//55.��ά���������Խ��
//ð������
//������������������Ԫ�صĵ�ַ,��������
// 1  sizeof(������)��������������С����λΪ�ֽ�
// 2. &������  ������������ʾ�������飬ȡ��������������ĵ�ַ
//int main() {
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("---------------------\n");
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("---------------------\n");
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}
//int main() {
//	//����Խ��ָ���� ʹ�������ʱ���л��е��±곬�����ֵ��С��0
//	int arr[10] = {734,552,555,234,677,654,876,564,653,765};
//	int temp = arr[0];
//	int num = 1;
//	int count = 1;
//	for (count = 0;count < 9;count++) {
//		for (num = 1; num < 10 - count; num++) {//��ȥcount
//			if (temp < arr[num]) {
//				exchange_num_pointer(&arr[num - 1], &arr[num]);
//			}
//			temp = arr[num];
//		}
//		temp = arr[0];
//	}
//	for (num = 0; num < 10; num++) {
//		print_no_pointer_num(arr[num]);
//	}
//	return 0;
//}
//��ά�������������ʾ�����������еĵ�ַ
