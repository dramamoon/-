#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//<>�������ñ�׼��ͷ�ļ�
//""����Ӧ���û��Զ���ͷ�ļ�
void print_each_num_of_a_number(int n) {
	int temp = 0;
	if (n > 9) {
		temp =n % 10;
		printf("% d\n", temp);
		n /= 10;
		print_each_num_of_a_number(n);

	}
	else printf("% d\n", n);
}//1����С�����ӡ����ÿһλ


//62.��ҵ����
//int main(){
//	//int n = 0;
//	//scanf("%d", &n);
//	//print_each_num_of_a_number(n);
//	//char arr[] = "abc";
//	//int len = strlen(arr);
//	//printf("%d\n", len);
//	//��62.47��46����
//	//sizeof�����ַ�����\0�����strlen��һ��
//	return 0;
//}
//void exchange_arr(int arr[], int arr1[], int sz) {
//	int tmp = 0;
//	for (int i = 0; i < sz ; i++) {
//		tmp = arr[i];
//		arr[i] = arr1[i];
//		arr1[i] = tmp;
//	}
//}
//int main() {
//	int arr[] = { 1,3,5,7,9 };
//	int arr1[] = { 2, 4, 6, 8, 0 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	exchange_arr(arr, arr1,size);
//	for (int i = 0; i < size; i++)
//		printf("%d\n", arr1[i]);
//	return 0;
//}
//int main() {
//	char x[100][100] = { "dasdsa" };
//	int i = 0;
//	int j = 0;
//	int mid = 0;
//	for (i = 0; i < 4; i++) {
//		for (mid = 0; mid < 4; mid++) {
//			printf("------");
//		}
//		printf("\n");
//		for (j = 0; j < 4; j++) {
//			//printf("     |");
//			x[i][j] = "     |";
//			printf("%s", x[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main() {
//	int a = 98;
//	printf("%c\n", (char)a);
//	return 0;
//}
//67.����������
//int main() {
//	int a = 1;
//	int b = a>>1;//��λ�Ƶ��ǲ���
//	printf("%d\n", b);
//	return 0;
//	//���ʱ��Ҳ�ǲ��루������
//}
//	
//int main() {
//	int a = 9;
//	//1001
//	int count = 0;
//	for (int i = 0; i < 32; i++) {
//		if (a & 1 == 1) {
//			count++;
//		}
//		a = a >> 1;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//������ֵ��������
//����a=b=c;
//�Ȱ�c��b���ٰ�b��a
//70.����������ϵ������
//int main() {
//	//int a = 0;
//	//int b = ~a;
//	//printf("%d\n", b);
//	//for (int i = 0; i < 10; i++) {
//	//	printf("%d\n", i);
//	//}
//	//for (int j= 0; j < 10; ++j) {
//	//	printf("%d\n", j);
//	//}//�޲��
//	
//	return 0;
//}
//71.������
//struct stu {
//	char name[10];
//};
//int main() {
//	struct stu s = { 0 };
//
//	return 0;
//}
//72.���ʽ��ֵ
//77.ָ��
//x86---32
//x64 ----64
//79.Ұָ��
//81.ָ��
//int main() {
//	int a = 0;
//	//int* p;
//	//*p = 10;//δ��ʼ�������������ַ��
//	//int* p= &a;
//	//*p +1 = 2;//ֱ���޷�����
//	//
//	//int* p2 = NULL;
//	//*p2 = 100;//err
//	
//	return 0;
//}
//83.�ṹ��
//struct peo
//{
//	char name[10];
//
//};   //�������ﴴ������; ��}p1,p2;  �ڴ���ȫ�ֱ���
//int main() {
//	struct peo p1;//�ṹ���������
//
//
//	return 0;
//}
//int main() {	
//	int  k= 3366;
//	int  q = 3;
//	int  m = 33123;
//	//printf("��%-08d��", a);
//	//printf("k=%%d\n", k);
//	//printf("%d %d", k, q, m);//���Զ����벻��������
//	//printf("%d", *(1));
//	return 0;
//}
//ȫ�ֱ�������̬����λ�ھ�̬��
//��Ĭ�ϳ�ʼ��Ϊ0��δ��ʼ��ʱ��
//�ֲ�������ջ������ʼ����Ĭ�����ֵ
//87.����
//int main() {
//	int a = 0;
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		arr[i] = i+1;
//	}
//	//int b=scanf("%d", &aq);
//	//printf("%d\n", a);
//	return 0;
//}
//int howmany(int n) {
//	int tmp = n/ 2;
//	if ((n % 2 != 0)&&(n>2)) {
//		n /= 2;
//		n += 1;
//	}
//	else {
//		n /= 2;
//	}
//	if (tmp ) {
//		return tmp + howmany(n);
//	}
//
//}
//int main() {
//	int n = 20;
//	int price = 1;
//	int nums = n / price;
//	int num=howmany(nums)+nums;
//	printf("%d", num);
//	return 0;
//}