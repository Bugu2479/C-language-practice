#include <stdio.h>


int g_val = 2022;
int main()
{
	printf("1:%d\n", g_val);

	printf("hehe\n");

	{
		int a = 10;
		printf("%d\n", a);
		printf("2:%d\n", g_val);

	}
	printf("3:%d\n", g_val);

	return 0;
}



extern int g_val;
int main()
{
	printf("%d\n", g_val);
	return 0;
}
//若要引用其他文件的定义，则要在int前加extern声明


