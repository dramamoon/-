#define _CRT_SECURE_NO_WARNINGS//需要放在头文件之前
#include<stdio.h>
#include<string.h>
#include<windows.h>
int Add(int x,int y) {
	return (x + y);
}//加函数
void print_no_pointer_num(int n) {
	printf("%d\n", n);
}//1、打印数字，无指针
void print_pointer_num(int* n) {
	printf("%0xd\n", n);
	printf("%zu\n", *n);
}//2、打印地址和数字本身，取地址
int my_strlen(char* x) {
	int count = 0;
	while (*x != '\0') {
		count++;
		x++;//进入下一个指针
	}
	return count;
}//3、自定义的strlen
int my_strlen1(char* n) {
	if (*n != '\0') {
		return 1 + my_strlen1(n + 1);//自我递归
	}
	else return 0;

}//4、与上述作用相同
void exchange_num_pointer(int* x,int* y){
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}//5、指针类型互换数字(可用)
//int exchange_num(int x, int y) {
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//	return x,y;
//}//6、互换数字(暂时不能用，因为一个函数返回多个值且不用指针的方法目前本人不知)
int Greatest_Common_Factor(int x, int y) {
	int temp = 0;
	if (x < y)//把大的数字放前面
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
}//7、求最大公因数函数
//21.define定义常量和宏
//define的宏中的x或y都无类型，只是用于替换
//#define add(x,y)(x+y)
//int main() {
//	int a = 1;
//	int b = 2;
//	int z = add(a, b);
//	printf("%d\n", z);
//	return 0;
//}
//23.指针
//寄存器>>高速缓存>>内存>>硬盘
//每个内存单元是一个字节
//int main() {
// //	printf("%d\n", sizeof(float));
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof(double));
//	//printf("%d\n", sizeof(long));
//	//printf("%d\n", sizeof(char));
//	////44841`
//	int a = 10;//向内存要4个字节
//	//&a;
//	//%p用于打印地址
//	printf("%p\n", &a);
//	int* p = &a;//int说明p指向的是int类型的
//	//p叫指针变量,是存放地址的位置变量
//	char b[] = {"aaa"};
//	char* pb= b;
//	printf("%p %p\n", p, pb);
//	*p;//*解引用操作符，意为通过p中存的地址，找到所指的对象，此处*p即为p所指向的对象a
//
//
//	return 0;
//	//调试能看到内存和监视
//}
//int main() {
//	printf("%zd\n", sizeof(short*));
//	//sizeof 最好用%zd或%zu打印
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(long*));
//	printf("%zd\n", sizeof(double*));
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(float*));
//	int* p1, * p2, *p3;//指针连用
//	return 0;
//}
//24.结构体
//struct把单一类型的量组合在一起
//学生描述
//struct xtu {
////	//成员
//	char name[10];//方括号中的数字指的是单个变量的长度，不是最多能有多少个name，而是一个name能有多长
//	int age;
//	char gender[10];
//	int height;
//};//这个分号不能丢
//void print(struct xtu* p) {
//	printf("%s %d %s %d\n", (*p).name, (*p).age, (*p).gender, (*p).height);
//	//结构体指针变量->成员名，使用前提是得到了结构体指针变量
//	printf("%s %d %s %d\n", p->name, p->age, p->gender, p->height);
//}
//int main() {
//	struct xtu ly = {"ly",22,"male",188};
//	struct xtu zgm = { "zgm",23,"female", 188};
//	struct xtu lfy = { "lfy",22,"male",182 };
//	struct xtu zwq = { "zwq",22,"male",188 };
//	struct xtu tsh = { "tsh",22,"male",190 };
//	struct xtu lxz = { "lxz",23,"male",168 };
//	//   .   操作符用于访问结构体对象
//	//printf("%s %d %s %d\n",ly.name, ly.age, ly.gender, ly.height);
//	print(&ly);
//	print(&zgm);
//	print(&lfy);
//	print(&zwq);
//	print(&tsh);
//	print(&lxz);
//	//define 不是关键字 是预处理指令
//	return 0;
//}
//24.if   switch语句
//int main() {
//	//if(ture){content;}   小括号内为ture执行content ，false不执行
//	//一个等号是幅值  两个等号是判断是否相等，相等为真，不等为假
//	//int a = 10;
//	//int b = 100;
//	//int c = 1000;
//	//int z = a>b ? b : c;
//	//printf("%d\n", z);
//	//if 后只有一条语句 不用加大括号
//	int age = 29;
//	if (age>=18&&age<28) {//(18 <= age < 28)此种写法是错误的，
//		//因为前半句18<=age为真，输出1，后半句变成1<28,为真，而实际上此人已不是青年
//		printf("青年\n");//一个大括号括起来的就是一个代码块
//	}
//	//在没有括号限制的情况下，else 与最近的 if 所搭配
//	return 0;
//}
//int test() {
//	int a = 2;
//	if (a == 3) {//if(3==a)与此相同，但这样写可以防止漏写等号
//		return 1;
//	}
//	return 0;//虽然与未加else输出结果相同，但不便于阅读，应在前面加上else
//}
//int main(){
//	int x = test();
//	printf("%d\n", x);
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	if (a % 2 == 1) {
//		printf("此数字为奇数\n");
//	}
//	else {
//		printf("此数字为偶数\n");
//	}
//	return 0;
//}
//int main() {
//	int a = 0;
//	while (a < 100) {
//		a++;
//		if (a%2==1) {
//			printf("%d,此数为奇数\n",a);
//		}
//		else {
//			printf("%d,此数为偶数\n",a);
//		}
//	}
//	return 0;
//}
//int main() {
//	//switch语句
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)//不能用float 
//	{
//		case 1 :
//			printf("星期一\n");
//			break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期日\n");
//			break;
//	}
//	return 0;
//}
//int main() {
//	//switch语句
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)//不能用float 
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("周末\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}
//27.while语句 
//int main() {
//	int a = 0;
//	while (a < 10) {
//		a++;
//		//break 也能跳出while循环,永久终止当前循环
//		//continue可用于跳过当前循环的后面的代码，但会进入下次循环，可以用来跳过循环中的某一项
//		if (5 == a)
//			continue;
//		printf("%d\n", a);
//	}	
//	return 0;
//}
//int main() {
//	//getchar获取ASCII码值（可以通过键盘），putchar打印ASCII码值对应的字符
//	//int ch = getchar();
//	//printf("%d\n", ch);
//	//putchar(ch);
//	// 以下可用于清除缓存区
//	//int c = 0;
//	//while ((c = getchar()) != EOF) {
//	//	putchar(c);
//	//	//printf("%d\n", c);
//	//}
//	//EOF   end of file 文件结束  ASCII码值通常为-1
//	//无法打开进行写入型的错误是因为有正在运行的程序尚未关闭
//	//scanf在获取是不会拿走\n，而getchar 会
//	//多输入的回车会被当做下次输入（\n）
//	//解决方法（临时）在中间加个getchar()（较简单的情况）
//	//解决方法（永久）：
//	//while ((ch=getchar()) != '\n'){   //把到\n的东西全拿走如果输入的密码超过了要的东西
//	//		;	//不做任何操作
//	// }
//	return 0;
//}
//int main() {
//	//scanf在获取时会忽略空格，如I LOVE YOU 只能获取到 I
//	//char ch[10];
//	//scanf("%s\n", &ch);
//	int c = getchar();
//	//printf("%s\n", ch);
//	putchar(c);
//	return 0;
//}
/////////////////////////////////////I can do it!
//习题
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
//等价
//习题2.输入一个人的出生日期，包含年月日，将该生日中的年、月、日分别输出
//数据范围年份满足1990<=y<=2015,月份满足1<=m<=12；日满足1<=d<=30;
//输入描述输入只有一行，出生日期，包含年月日，年月日之间的数字无分隔符
//输出：三行，第一行输出年，第二行输出月，第三行输出日，若输出的日和月为单位数，则在其前方补0
//int main() {
//	int y = 0, m = 0, d = 0;
//	scanf("%4d%2d%2d", & y , & m ,& d);
//	if (y >= 1990 && y <= 2015 && m >= 1 && m <= 12 && d >= 1 && d <= 30) {
//		printf("year=%d\n", y);
//		printf("month=%02d\n", m);//整型补齐，用0两位
//		printf("day=%02d\n", d);
//	}
//	return 0;
//}
// 习题3
//int  main() {
//	int a = 0;
//	int stu_num = 0;
//	int math = 0;
//	int eng = 0;
//	int phy = 0;
//	scanf("%d;%d,%d,%d", &stu_num, &math, &eng, &phy);
//	printf("The each subject score of No.%d is %d,%d,%d.\n",stu_num, math ,eng ,phy);
//}
//float a=0.0f会让编译器认为数据为float类型的
//int main() {
//	//在局部函数中用static修饰的变量出了局部部分之后，仍然保持原来的值，再次进入此函数时，不会被重新赋值
//	int n = printf("hello world!");
//	printf("\n%d\n", n);
//	return 0;
//}
//int main() {
//
//	int n = sizeof(char*);
//	printf("%d\n", n);//64位电脑的指针size为8；32位计算机的为4
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
//	scanf("%d\n", &a);//\n的存在会多一次输入加回车
//	printf("%d\n", a);
//}
//编译器会默认0.0为double类型
//33.for循环
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		//i尽量不在循环内改
//		printf("%d\n",i);
//	}
//	return	0;
//}
//int main() {
//	for (;;) {//for循环判断部分省略，则条件恒成立
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main() {
//	//C99  才支持for(int i=0;;)
//	//c++支持此种语法
//	//最好在前边初始化
//
//	return 0;
//
// }
//34.do while语句
// 至少执行一次
// for 用的最多
//int main() {
//	int num = 1;
//	do {
//		printf("%d\n", num);
//		num++;
//	}
//	while (num <= 10);
//	return 0;
//}
//36.练习 计算n的阶乘
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
//	//找到5下标
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
//	//一个整型数是4字节
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
//		Sleep(1000);//S需要大写
//		system("cls");//系统清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", ch2);
//	return 0;
//}
//int main() {
//	printf("用户名：123321123，你好\n");
//	printf("登录请键入密码：\n");
//	char password[200] = "0";
//	int n = 0;
//	//比较两个字符串是否相等，应该使用库函数 strcmp(string compare)
//	//strcmp返回值为0的时候，说明字符串相等
//	for (n = 3; n > 0; n--) {
//		scanf("%s", &password);
//		if (strcmp(password, "123456") == 0 ) {
//			printf("登录成功\n");
//			break;
//		}
//		else {
//			printf("密码错误，你还有%d次机会\n请重新输入：", n-1);
//		}
//	}
//	if (n == 0) {
//		printf("登录失败\n");
//	}
//	return 0;
//}
//39.猜数字游戏
#include<stdlib.h>
#include<time.h>
//time_t//是个整数
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
//			printf("猜大了\n请继续");
//		else if (input < random)
//			printf("猜小了\n请继续");
//	}
//	//int x = 0;
//	//printf("猜测正确，正确数字为%d\n是否继续游戏，按下数字1键继续，数字2键退出", random);
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
//{		//产生随机数，函数
//	//RAND_MAX为32767 生成的最大值
//	srand((unsigned int)time(NULL));//time(指针) 括号中应该为指针
//	//用于设置rand函数起点，只要设置一次就行
//	//但若没有，则每次运行时，产生的随机数是相同的
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
//	//system("shutdown -s -t 60");//60秒内关机
//	//system("shutdown -a");
//	
//	return 0;
//}
//39.40.函数
//库函数,,,,,使用时头文件
//int main() {
////	strcmp;
////	//null character  是 \0
////	char arr1[20] = {0};
////	char arr2[20] = "hello";
////	strcpy(arr1,arr2);
////	printf("%s\n", arr1);
//	char arr1[20] = { "hello world" };
//	memset(arr1+6, 'x', 5);
//	printf("%s\n", arr1);
////memset存储设置
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
//void  swap(int* px,int* py) {//括号中为形式参数，此次函数运行结束，形式参数将会销毁
//	int mid = 0;
//	mid = *px;
//	*px = *py;
//	*py = mid;
//}
//int main()
//{
//	//不加指针的版本，在swap函数中，xy对换只是形式参数交换，实际参数并没有改变
//	int a = 0;
//	int b = 0;
//
//
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("a=%d  b=%d\n", a, b);
//	return 0;
//}
//一个工程中只能有一个main
//int main() {
//	//传值调用不会影响实参
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
//			printf("%d不是素数\n", input);
//			break;
//		}
//		else if (input == i)
//		{
//			printf("%d是素数\n", input);
//		}
//		
//	}
//	return 0;
//}//形式参数和实际参数命名时可以相同  可以不同
//bool类型C99引入
//函数在接收一个数组时，得到的是数组中首元素的地址
#include <stdbool.h>
//void  add(int* n) {
//	(*n)++;//加括号改变的是num对应指针的值，没括号只是改变指针
//}
//int main() {
//	//bool只有真或假
//	int num = 0;
//	for (int i = 0; i < 10; i++) {
//		add(&num);
//		printf("%d\n", num);
//	}
//	return 0;
//}
//43.函数嵌套调用
//可以嵌套调用，不能嵌套定义
//链式访问
//int main() {
//	//int len = strlen("abcdef");
//	int a = printf("%d\n", 23);//这里是23  (换行） 233
//	int a1 = printf("%d", 23);//这里a1打印是2
//
//	print_no_pointer_num(a);
//	print_no_pointer_num(a1);
//
//	//print_pointer_num(&len);
//
//	//printf返回的是其打印的字符数
//	//如 int  a = printf("%d",22);
//	//a = 2;
//
//	return 0;
//}
//main参数
//43.函数的声明和定义
//int main(int argc,char* argv[],char*envp[]) ///////////////////////////????????????????
//{
//	int a = 0;
//	print_pointer_num(&a);
//	return 0;
//}
//#pragma comment(lib,"静态库名称")
// 静态库可以把项目，右击，属性，配置属性->常规->配置类型->改为.lib，编译运行
//导入静态库
//函数声明一般放在头文件中，在实际应用时
//#pragma once只能被包含一次
//46.函数递归
//核心思想：把大问题转化为小问题
//递归必要条件
//1、存在限制条件，当满足此条件时，不再递归
//2、每次递归都要越来越接近此条件
//void printtest1(unsigned int n) {
//	if (n >= 10) {
//		printtest1(n/10);
//	}
//	printf("%u ", n % 10 );
//}
//int main() {
//	//%u打印无符号整数
//	//%d打印有符号整数
//	unsigned int num = 0;
//	scanf("%u", &num);
//	printtest1(num);
//	return 0;
//}
//stack overflow栈溢出
//每一次函数调用会在栈区调用空间
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
//48.递归和迭代
//循环是一种迭代

//斐波那契数列
//递归写法
//int fib(int num = 1) {
//	if (num > 2) {
//		return fib(num - 1) + fib(num - 2);//算位数靠后的，需要进行多次指数运算，并不高效
//	}
//	else if (num == 2) return 1;
//	else return 0;
//}
// 斐波那契数列更为适用的写法，迭代
// 循环是一种迭代
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
// 49.函数作业
// char 属于整型家族
//default 可以放在case前面
//switch的判断只能用整型的量，float这种不行
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
//最小公倍数*最大公约数=两个原数相乘
//int calculate_year(int year) {
//	int count = 0;
//	for (year; year <= 2000; year++) {
//		if (year % 4 == 0) {
//			print_no_pointer_num(year);
//			count++;
//		}
//	}
//	return count;
//}//计算某年到2000年的闰年数量
//int main() {
//	int i = 1000;
//	int count = calculate_year(i);
//	printf("1000~2000年间，闰年一共有%d个\n",count);	
//}
//int main() {
//	int arr[10] = { 2131,32432,444,555,2143,787,12321,99898,573,7777 };
//	//找出最大值
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
////%2d在打印的时候，哪怕是1位数，都能用空格补全两个位置
//a=(b,c);会把c的值赋给a,逗号表达式
//高内聚低耦合是什么？？？？？？？？？？？？？？？？？？
//return 3,4;只能返回后面的4
//数组传给函数的是指针，能用函数直接改变实参

//int main() {
//	int arr[] = { 0,1 };
//	int* p1 = &arr[0];
//	int* p2 = &arr[1];
//	printf("%0xd %0xd", p1, p2);
//	return 0;
//}
//sleep 在Windows系统中单位为ms
//int main() {
//	int arr[10] = { 1,2,3 };//不完全初始化，剩余变量默认为0,对字符一样,对二维数组也一样
//	char ch[10] = { 'a','b','c' };
	//print_no_pointer_num(ch[5]);
	//%p用于打印地址
//	int arr1[4][4] = {
//		{1,2,3,4},
//		{2,3,4,5},
//		{3,4,5,6},
//		{4,5,6,7}
//	};//二维数组的两个方括号中的数字，第二个不能被省略
//	int num = 0;
//	for (num = 0; num < 4; num++) {
//			print_no_pointer_num(arr1[num][num]);
//	}
//	print_no_pointer_num(sizeof(arr1));
//	return 0;
//}
//55.二维数组和数组越界
//冒泡排序
//数组名本质是数组首元素的地址,但有例外
// 1  sizeof(数组名)，计算的是数组大小，单位为字节
// 2. &数组名  这里数组名表示整个数组，取出的是整个数组的地址
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
//	//数组越界指的是 使用数组的时候行或列的下标超过最大值或小于0
//	int arr[10] = {734,552,555,234,677,654,876,564,653,765};
//	int temp = arr[0];
//	int num = 1;
//	int count = 1;
//	for (count = 0;count < 9;count++) {
//		for (num = 1; num < 10 - count; num++) {//减去count
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
//二维数组的数组名表示的是首行整行的地址
