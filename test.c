#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//std--standard  i--input   o--output
//int main��׼������void ����  int��������
//main �ǳ������  mainֻ��һ��
//////int main(){
//////
//////
//////
//////	//printf("3\n");
//////	printf("%d\n", sizeof(int));
//////	printf("%d\n", sizeof(short));
//////	printf("%d\n", sizeof(long));
//////	printf("%d\n", sizeof(long long));
//////
//////	printf("%d\n", sizeof(double));
//////	printf("%d\n", sizeof(float));
//////
//////
//////	return 0;//Լ���׳�
//////}
//int main() {
//	int a=0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//vsר������scanf_s���������������Ͽ� ��ͨ��
//	int c = a + b;
//	printf("%d", c);
//	return 0;
//}
//enum color {
//	RED,
//	GREEN,
//	BLUE
//};
//int main() {
//	30;
//	3.14;
//	//1.���泣��
//	'w';//�ַ�
//	"abc";//�ַ���
//	//const���εĳ�����(�����ǲ��ܱ������޸ĵĴ��г������ʵı���)
//	const int a = 5;
//	//a = 100;
//	//int b[a] = { 1 2 3 4 5 };
//	//define�����ʶ������
//	//ö�ٳ���
//	// \0���ַ����Ľ������
//
//	enum color c = RED;
//		printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	char s[] = { "\\0"};//�ַ���\\0��ӡ����\0��\0��ӡ�������ǿգ�\\��ӡ������\ ......
//
//	char b[] = {'a','\0'};//�ַ����Ӹ�/0���������
//	
//	printf("%s\n", s);
//
//	printf("%s\n", b);
//	int len = strlen("a000b");
//	printf("%d\n", len);
//
//	printf("%d\n", strlen(b));
//	return 0;
//	//string length �� ͷ�ļ���string.h
//	}
//9.ת���ַ�
//int main() {
//	//\x+һ����λ��(��λ��ǰ��Ӹ�0Ҳ���������е�����λ������)  �������16�������ִ�����ַ�   ����\x63  16���Ƶ�63����10��99
//	// \+һ����λ����0~7����Ϊ�ǰ˽��������7����ת��Ϊ10���ƺ�ASCII��Ķ�Ӧ�����Ǽ�����ʲô�ַ�
//	// ASCII���� ��a��97  A��65  ���32
//	//��ӡ�ַ�%c
//	
//	// һ��ת�����һ��  �ַ�
//	// \0������ת���ַ�,һ������,�ַ����ͽ�����\n�ǻ���;\t��ˮƽ�Ʊ����\v��ֱ�Ʊ��
//	//printf("abc\n");
//	//printf("annnn\n\0jhjjhdjshjdh");
//	//printf("??)\n");
//	//\r�ǻس�
//	//printf("%s\t", "\"");
////	printf("fhgeyghws\rsdjnbsuhd"); 
//	printf("%d\n",strlen("c:\\test\\628\\test.c"));
//	return 0;
//}
/*�Ǵ�ͳC���Ե�ע�ͷ�ʽ*/ /*��ͳע��ȱ���ǲ���Ƕ��*/
//C++���ù�����ע�ͷ�ʽ
//int main(){
//	//12.ѭ������ѡ�����
//	char input1='q';//(��һ��ѡ����)
//	char input2='q';
//	printf("һ��ѡ���⣨����Сд��ĸ����ȷ���󣬰��»س����鿴�𰸲�������һ�⣩\n");
//	printf("1.������ѡ���⣬����\na.����\tb.����\n");
//	while (input1 != 'a' && input1 != 'b') {
//		scanf("%c", &input1);
//
//		if (input1 == 'a') {
//			printf("��ϲ�㣬�ش���ȷ\n");
//			printf("2.�������һ��ѡ��a.����ѡ���ôӦ����ο���\na.�ú�ѧϰ֪ʶ����ȡ�������ո���Ķ���\tb.äĿ��ǰ��\n");
//			while (input2 != 'a' && input2 != 'b') {
//				scanf("%c", &input2);
//				if (input2 == 'a') {
//					printf("��ϲ�㣬�ش���ȷ\n");
//				}
//				else if (input2 == 'b') {
//					printf("���ź����ش����\n");
//				}
//				else {
//					printf("��Чѡ�������¼���\n");
//				}
//			}
//		}
//		else if (input1 == 'b') {
//			printf("���ź����ش����\n");
//			printf("2.�������һ��ѡ��b.���á�ѡ�����Ȼ�ǲ��Եģ���ôӦ����θı���״��\na.�ú�ѧϰ֪ʶ����ȡ�������ո���Ķ��������ٰ���\tb.�������\n");
//
//			while (input2 != 'a' && input2 != 'b') {
//				scanf("%c", &input2);
//				if (input2 == 'a') {
//					printf("��ϲ�㣬�ش���ȷ\n");
//				}
//				else if (input2 == 'b') {
//					printf("���ź����ش����\n");
//				}
//				else {
//					printf("��Чѡ�������¼���\n");
//				}
//
//			}
//		}
//
//	}
//	return 0;
//}
//13.����
// void�Ǻ����ڲ���Ҫ�����κ�ֵ��ʱ�� ����������֮ǰ�ӵ�void�����ڱ���û�з���ֵ���հף�
// ��void ��return  x; ������
//int cacn(int x,int y) {//int�Ƿ�������
//
//	int z = x + y;
//
//	//return x + y;//�����������Ҫ��intz  x+y�ɼ�����Ҳ�ɲ���
//	//return 0;���������ʲô����0
//	return z;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	 
//	scanf("%d%d", &a, &b);
//
//	int sum = cacn(a, b);
//
//	printf("%d", sum);
//
//
//
//	return 0;
//
//}
//14.����
//int main() {
//	int shuzu1[10] = {1,2,3,4,5,6,7,8,9,10};
//	//int a=0;���Է����
//	for (int a=0; a <= 9;a=a+1) {
//		printf("%d\n", shuzu1[a]);
//	}
//	return 0;
//}
// \0ascii��ֵ��0 EOF��-1
//int main() {
//	char arr0[3];
//	char arr[] = { 'b','i','t' };
//	char arr1[3] = { 'b','i','t' };
//	char arr2[4] = { 'b','i','t' };//ֻ������������δ��ȫ��ʼ�� ��strlen��3
//	printf("%d %d %d %d\n",strlen(arr0), strlen(arr),strlen(arr1),strlen(arr2));
//	//���Ϊ 99�������   67�������     35�������      3
//	//int sa[n];
//	//n��λ��ӦΪ��������������ֻ��Ϊ����
//	//C99֮ǰ���ǳ������߳������ʽ��C99֮��֧�ֱ䳣���飬����Ϊ������
//	// ��Ϊ����֮��Ͳ��ܳ�ʼ����
//	//��int a[n]={2};������
//	//vs��C99֧�ֲ��Ǻܺ�
//	//char a[10]="hello bit"��������������ȷ��
//	return 0;
////15.ϰ���
//int main() {
//	char a1[10] = { "hello bit" };
//	char a2[10] = "hello bit";
//	printf("%d %d\n", strlen(a1), strlen(a2));
//	printf("%s %s\n", a1, a2);
//	printf("%c %c\n", a1, a2);
//	return 0;
//}
/*���Ϊ9 9
	hello bit hello bit
	8  h��ÿ�ε����Ŷ���һ����*/

//17.������
//int main() {
//	//ʹ�ó���ʱ������һ�������������ո��������㣬
//	//ȫ�����;Ͱ���������
//	//   %����ȡģ��ȡ�ࣩ��ʱ��ֻ��������
//	//   <<  >>  |   ^   &  �Ȳ���
//	//=Ϊ��ֵ  a+=b�ȼ���a=a+b   a*=b�ȼ���a=a*b     (����/=   -=   <<=   >>=  |=   ^=)
//	//  %=Ҳ���ԣ�ֻ��������
//	//��Ŀ������
//	//!�߼����������
//	//int a = 1;
//	//printf("%d",sizeof a);
//	//printf("%d",sizeof (a));
//	//printf("%d", sizeof(int));
//	//һ�������ĸ��ֽ�
//	//ǰ�ã����� ++  --
//	//int a = 10;
//	//int b = a++;
//	//int c = ++a;
//	//printf("%d %d %d\n", a, b, c);//�������� 12 10 12
//	//int d = 10;
//	//int e = ++d;
//	//int f = d++;
//	//printf("%d %d %d\n", d, e, f);//�������� 12 11 11
//	//int a = (int)3.1415926;
//	//float b = (double)3.1415926;
//
//	//printf("%d %f", a,b);//(����)  ǿ������ת��
//	// ==  !=���ڲ�����ڻ򲻵�
//	//&&���ң��߼��룩   ||���ߣ��߼���	
//	//��Ŀ������   ����?��:��
//	//int a = 200;
//	//int b = 20;
//	//int c = 100;
//	//int r = a > b ? c : a;//a����b��?����������c�������a
//	//printf("%d\n",r );
//	//���ű��ʽ:�����������μ��㣬�������ʽ�����һ�����ʽ�Ľ��
//	//int a = 10;
//	//int b = 9;
//	//int c = (a -= 3, b - 9, a += 6);
//	//printf("%d\n", c);
//	//[]�±����ò�����   ()�������ò�����
//	//////const int a = 100;
//	//////a+= 100;//�����޷��޸�
//	//////printf("%d\n", a);
//	//////
//	//extern�����ⲿ
//	// enumö��  struct�ṹ��   union������	
//	//register�Ĵ���
//	//����������Ϊ�ؼ���
//	return 0;
//}
 //20.�ؼ���typede��static
//typedef����������,�Ѹ��ӵļ򵥻�
//static���ξֲ���ȫ�ֱ��������κ���
//static����֮���ȫ�ֱ���������������c�ļ���ֻ�������ڲ�c�ļ�
//static���εĺ���������������c�ļ������پ����ⲿ��������
//typedef unsigned int u;//��unsigned int  �򻯳� uint
//void a() {
//	static a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main() {
//	//uint a = 1;
//	//printf("%d\n", a);
//	//static���ξֲ�����ʱ�����˾ֲ��ռ䣬����ͣ�ͣ��������٣��ı��˱����Ĵ洢λ��,Ӱ��������������
//	//�������������ʱ����ͬ
//	//�������Ϊֻ��һ�εĳ�ʼ���Ҳ����ظ�
//	int q = 0;
//	while (q < 10) {
//		a();
//		q++;
//	}
//	//register�Ĵ����ؼ���
//
//
//
//	return 0;
//}