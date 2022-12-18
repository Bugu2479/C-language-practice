#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void input(int* number);
void value(int* number);
void output(int* number);
int main()
{
	int number[10];
	input(number);
	value(number);
	output(number);
	return 0;
}

void input(int* number)
{
	printf("请输入10个数：\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &number[i]);
	}
}
void value(int* number)
{
	int* max, * min, * p, temp;
	max = min = number;
	for (p = number + 1; p < number + 10; p++)
		if (*p < *min)min = p;
	temp = number[0]; number[0] = *min; *min = temp;
	for (p = number + 1; p < number + 10; p++)
		if (*p > *max)max = p;
	temp = number[9]; number[9] = *max; *max = temp;
}
void output(int* number) 
{
	int* p;
	printf("经过处理，目前这10个数的顺序为：\n");
	for (p = number; p < number + 10; p++)
		printf("%d ", *p);
}



//写一函数，求一个字符串的长度。在主函数中输入字符串并输出其长度。
#include<stdio.h>
#include<string.h>
int j;



int  jisuan(char *p)
{
	int i;
	for (i = 0; p[i] != '\0'; i++)
	{
		j++;
	}
}

int main()
{
	char arr[100];
	gets(arr);
	jisuan(arr);
	printf("长度为：%d", j);
	return 0;
}







