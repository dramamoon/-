#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//std--standard  i--input   o--output
//int main标准主函数void 古老  int整型类型
//main 是程序入口  main只有一个
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
//////	return 0;//约定俗成
//////}
//int main() {
//	int a=0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//vs专属函数scanf_s，其他编译器不认可 不通用
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
//	//1.字面常量
//	'w';//字符
//	"abc";//字符串
//	//const修饰的常变量(本质是不能被随意修改的带有常量性质的变量)
//	const int a = 5;
//	//a = 100;
//	//int b[a] = { 1 2 3 4 5 };
//	//define定义标识符常量
//	//枚举常量
//	// \0是字符串的结束标记
//
//	enum color c = RED;
//		printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	char s[] = { "\\0"};//字符串\\0打印出来\0，\0打印出来的是空，\\打印出来是\ ......
//
//	char b[] = {'a','\0'};//字符最后加个/0才算结束；
//	
//	printf("%s\n", s);
//
//	printf("%s\n", b);
//	int len = strlen("a000b");
//	printf("%d\n", len);
//
//	printf("%d\n", strlen(b));
//	return 0;
//	//string length 的 头文件是string.h
//	}
//9.转义字符
//int main() {
//	//\x+一个二位数(二位数前面加个0也能正常运行当做二位数处理)  代表的是16进制数字代表的字符   比如\x63  16进制的63等于10的99
//	// \+一个三位数（0~7，因为是八进制最大是7）；转化为10进制后看ASCII表的对应数字是几就是什么字符
//	// ASCII码中 ，a是97  A是65  相差32
//	//打印字符%c
//	
//	// 一个转义符算一个  字符
//	// \0本质是转义字符,一旦遇到,字符串就结束；\n是换行;\t是水平制表符；\v垂直制表符
//	//printf("abc\n");
//	//printf("annnn\n\0jhjjhdjshjdh");
//	//printf("??)\n");
//	//\r是回车
//	//printf("%s\t", "\"");
////	printf("fhgeyghws\rsdjnbsuhd"); 
//	printf("%d\n",strlen("c:\\test\\628\\test.c"));
//	return 0;
//}
/*是传统C语言的注释方式*/ /*传统注释缺点是不能嵌套*/
//C++引用过来的注释方式
//int main(){
//	//12.循环语句和选择语句
//	char input1='q';//(第一道选择题)
//	char input2='q';
//	printf("一、选择题（输入小写字母，答案确定后，按下回车键查看答案并进入下一题）\n");
//	printf("1.请做出选择题，（）\na.开卷\tb.摆烂\n");
//	while (input1 != 'a' && input1 != 'b') {
//		scanf("%c", &input1);
//
//		if (input1 == 'a') {
//			printf("恭喜你，回答正确\n");
//			printf("2.由于你第一题选择“a.开卷”选项，那么应当如何开卷？\na.好好学习知识，争取做到掌握更多的东西\tb.盲目向前冲\n");
//			while (input2 != 'a' && input2 != 'b') {
//				scanf("%c", &input2);
//				if (input2 == 'a') {
//					printf("恭喜你，回答正确\n");
//				}
//				else if (input2 == 'b') {
//					printf("很遗憾，回答错误\n");
//				}
//				else {
//					printf("无效选择，请重新键入\n");
//				}
//			}
//		}
//		else if (input1 == 'b') {
//			printf("很遗憾，回答错误\n");
//			printf("2.由于你第一题选择“b.摆烂”选项，这显然是不对的，那么应当如何改变现状？\na.好好学习知识，争取做到掌握更多的东西，不再摆烂\tb.坚持自我\n");
//
//			while (input2 != 'a' && input2 != 'b') {
//				scanf("%c", &input2);
//				if (input2 == 'a') {
//					printf("恭喜你，回答正确\n");
//				}
//				else if (input2 == 'b') {
//					printf("很遗憾，回答错误\n");
//				}
//				else {
//					printf("无效选择，请重新键入\n");
//				}
//
//			}
//		}
//
//	}
//	return 0;
//}
//13.函数
// void是函数在不需要返回任何值的时候 在命名函数之前加的void，用于表明没有返回值（空白）
// 即void 和return  x; 不共存
//int cacn(int x,int y) {//int是返回类型
//
//	int z = x + y;
//
//	//return x + y;//加这个都不需要再intz  x+y可加括号也可不加
//	//return 0;加这个输入什么都得0
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
//14.数组
//int main() {
//	int shuzu1[10] = {1,2,3,4,5,6,7,8,9,10};
//	//int a=0;可以放外边
//	for (int a=0; a <= 9;a=a+1) {
//		printf("%d\n", shuzu1[a]);
//	}
//	return 0;
//}
// \0ascii码值是0 EOF是-1
//int main() {
//	char arr0[3];
//	char arr[] = { 'b','i','t' };
//	char arr1[3] = { 'b','i','t' };
//	char arr2[4] = { 'b','i','t' };//只有三个变量，未完全初始化 故strlen是3
//	printf("%d %d %d %d\n",strlen(arr0), strlen(arr),strlen(arr1),strlen(arr2));
//	//结果为 99（随机）   67（随机）     35（随机）      3
//	//int sa[n];
//	//n的位置应为常量，数组数量只能为常量
//	//C99之前都是常量或者常量表达式，C99之后支持变常数组，允许为变量，
//	// 但为变量之后就不能初始化了
//	//如int a[n]={2};不可以
//	//vs对C99支持不是很好
//	//char a[10]="hello bit"这样的数组是正确的
//	return 0;
////15.习题课
//int main() {
//	char a1[10] = { "hello bit" };
//	char a2[10] = "hello bit";
//	printf("%d %d\n", strlen(a1), strlen(a2));
//	printf("%s %s\n", a1, a2);
//	printf("%c %c\n", a1, a2);
//	return 0;
//}
/*结果为9 9
	hello bit hello bit
	8  h（每次第三排都不一样）*/

//17.操作符
//int main() {
//	//使用除号时，若有一个浮点数，则按照浮点数计算，
//	//全是整型就按照整型算
//	//   %计算取模（取余）的时候只能用整数
//	//   <<  >>  |   ^   &  先不讲
//	//=为赋值  a+=b等价于a=a+b   a*=b等价于a=a*b     (还有/=   -=   <<=   >>=  |=   ^=)
//	//  %=也可以，只用于整数
//	//单目操作符
//	//!逻辑反，变真假
//	//int a = 1;
//	//printf("%d",sizeof a);
//	//printf("%d",sizeof (a));
//	//printf("%d", sizeof(int));
//	//一个整形四个字节
//	//前置，后置 ++  --
//	//int a = 10;
//	//int b = a++;
//	//int c = ++a;
//	//printf("%d %d %d\n", a, b, c);//这里结果是 12 10 12
//	//int d = 10;
//	//int e = ++d;
//	//int f = d++;
//	//printf("%d %d %d\n", d, e, f);//这里结果是 12 11 11
//	//int a = (int)3.1415926;
//	//float b = (double)3.1415926;
//
//	//printf("%d %f", a,b);//(类型)  强制类型转换
//	// ==  !=用于测设等于或不等
//	//&&并且（逻辑与）   ||或者（逻辑或）	
//	//三目操作符   条件?量:量
//	//int a = 200;
//	//int b = 20;
//	//int c = 100;
//	//int r = a > b ? c : a;//a大于b吗?如果大于输出c否则输出a
//	//printf("%d\n",r );
//	//逗号表达式:从左向右依次计算，整个表达式是最后一个表达式的结果
//	//int a = 10;
//	//int b = 9;
//	//int c = (a -= 3, b - 9, a += 6);
//	//printf("%d\n", c);
//	//[]下标引用操作符   ()函数调用操作符
//	//////const int a = 100;
//	//////a+= 100;//报错，无法修改
//	//////printf("%d\n", a);
//	//////
//	//extern声明外部
//	// enum枚举  struct结构体   union联合体	
//	//register寄存器
//	//变量名不能为关键字
//	return 0;
//}
 //20.关键词typede和static
//typedef类型重命名,把复杂的简单化
//static修饰局部或全局变量，修饰函数
//static修饰之后的全局变量不能用于其他c文件，只可用于内部c文件
//static修饰的函数不能用于其他c文件，不再具有外部链接属性
//typedef unsigned int u;//把unsigned int  简化成 uint
//void a() {
//	static a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main() {
//	//uint a = 1;
//	//printf("%d\n", a);
//	//static修饰局部变量时，出了局部空间，变量停滞，不会销毁，改变了变量的存储位置,影响了其生命周期
//	//生命周期与程序时长相同
//	//可以理解为只有一次的初始化且不再重复
//	int q = 0;
//	while (q < 10) {
//		a();
//		q++;
//	}
//	//register寄存器关键词
//
//
//
//	return 0;
//}