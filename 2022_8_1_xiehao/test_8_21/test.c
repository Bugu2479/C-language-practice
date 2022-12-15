#define _CRT_SECURE_NO_WARNINGS 1
//define定义必须在第一行


#include <stdio.h>


int main()
{
	printf("bite\n");
	printf("bite\n");
	printf("%d\n", 100);
	printf("%d\n",sizeof(char));
	return 0;
}
//一个工程可以有多个源文件，但多个源文件只能有一个主函数
//\n可以使打印换行
//打完一行代码必须加分号   ;   不是 ； 用来表示完成;



int main()
{
	int age = 20;
	double  weight = 75.3;
	age = age + 1;
	printf("%d\n", age);
	weight = weight - 10;
	printf("%lf\n,",weight);
	return 0;
}
//也可以 int age;再定义 age = 20; 能int a,b,c; 但是不能int a=b=c;
// 整形用%d表示，单精度浮点数用 %s   ，双精度浮点数用%lf表示;
//标识符开头必须为字母或下划线，严格区分大小写且最好不要超过8位，有的C程序只能识别前8位，会被认为是同一标识符
//变量名字叫标识符，那常量的名字叫什么？？？

int a = 100;
int main()
{
	int b = 10;
		printf("%d\n", a);
	return 0;
}
//全局变量可以适用任何地方，如果要在同一工程的不同文件中运行，须在另一个文件中声明引用;
//局部变量只能在它所在的括号内使用，且全局变量应与局部变量不要重名;



int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("%d\n", sum);
	return 0;
}
//%d表示的是整型,输入的要是整数，而输入则是输入到a和 b;