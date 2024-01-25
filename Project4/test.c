#define _CRT_SECURE_NO_WARNINGS 1
//此代码务必放在第一行，用于解决scanf的“不安全”问题，以用于继续使用scanf
//可寻找newc++file.cpp记事本输入该代码以实现后续无需再次输入同时实现该函数的存在及使用

#include <stdio.h>
//int main()
//{
//	//创建的一个变量
//	//类型	变量的名字 = 0;
//	//类型	变量的名字;//不推荐
//	int age = 20;
//	double weight = 75.3;
//
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n",age);
//	printf("%f\n",weight);
//
//	return 0;
//}

//%d - 整型
//%f - float
//%if - double

//a - 全局变量 - {}外部定义的变量
//int a = 100;

//int main()
//{
//	//a - 局部变量 - {}内部定义的变量
//	//当局部变量和全局变量名字冲突的情况下，局部优先
//	//不建议全局变量和局部变量的名字相同
//	int a = 10;
//
//	printf("%d\n", a);
//
//	return 0
//}


//写一个代码求两个整数的和
//scanf函数是输入函数
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;

	scanf("%d %d", &a, &b);
	//解决办法：源文件的第一行加入 #define _CRT_SECURE_NO_WARNINGS 1
	//可以使用VS编译器提供的scanf_s函数，但该函数不是C语言标准规定的

	sum = a + b;
	printf("sum = %d\n", sum);

	return 0;

}