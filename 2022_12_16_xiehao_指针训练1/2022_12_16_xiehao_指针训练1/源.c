#define _CRT_SECURE_NO_WARNINGS 1
////1 输入10个整数，按照从小到大的顺序输出。（排序用指针实现）
//#include<stdio.h>
//#include<string.h>
//int arr[10];//宏定义数组，使得函数返回值的方式更加方便
//int main()//这里的main函数只做调用函数的作用，功能都由各个函数实现
//{
//	void shuru(int* p);
//	void paixu(int* p,int n);
//	void shuchu(int* p);
//	shuru(arr);
//	paixu(arr,10);
//	shuchu(arr);
//}
//
//void shuru(int *p)
//{
//	int *q;
//
//	printf("请输入10个整数:\n");
//	for (q = p; q< p +10; q++)//通过指针依次访问和赋值数组的各个元素
//	{
//		scanf("%d",q);//数组的本质是指针
//	}
//}
//
//
//
//void paixu(int *p,int n)//冒泡算法
//{
//	int i, j, t;
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = 0; j < n - 1 - i;j++)
//		{
//			if (p[j] > p[j + 1])//允许p[]这种形式访问所指向的数组元素
//			{
//				t = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = t;
//			}
//
//		}
//
//	}
//}
//void shuchu(int* p)
//{
//	int* q;
//	printf("排序后的数组为：");
//	for (q = p; q < p + 10; q++)
//	{
//		printf("%d ", *q);//在这里打印用了 解引用
//	}
//
//}



// 2 有10个整数，使前面各数顺序向后移2个位置，最后2个数变成最前2个数。使用函数实现此功能，在主函数中输入10个数和输出调整后的这10个数。
#include<stdio.h>
void paixu(int* p,int n);
int main()
{
	int arr[10],*q;
	printf("请输入10个数：");
	for(q = arr; q<arr+10;q++)
	{
		scanf("%d", q);
	}
	 paixu(arr,10);
	 printf("排序后的数为：");
	for (q = arr; q < arr + 10; q++)
	{
		printf("%d ", *q);
	}
	return 0;
}

void paixu(int* p,int n)
{
	int e1, e2, * end, * pst;
	end = p + n - 1;
	pst = p + n - 3;
	e1 = *end;
	e2 = *pst+1;
	for (; pst >= p; pst--, end--)
	{
		*end = *pst;
	}
	*(p) = e2;
	*(p + 1) = e1;
	printf("\n");
}
//该算法为先把10个数中第9，10个数额外储存起来，然后用循环，先以第9个数为起点（中心点），把前一个数（第8个数）用指针赋值给后一个数（10）
//然后中心点向左移动，依次把中心点前数与后数交换，中心点为第2数时停止，这时除了第1,2个数全部交换成功，再把之前额外储存的第9,10数