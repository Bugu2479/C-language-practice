#define _CRT_SECURE_NO_WARNINGS 1
////1 ����10�����������մ�С�����˳���������������ָ��ʵ�֣�
//#include<stdio.h>
//#include<string.h>
//int arr[10];//�궨�����飬ʹ�ú�������ֵ�ķ�ʽ���ӷ���
//int main()//�����main����ֻ�����ú��������ã����ܶ��ɸ�������ʵ��
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
//	printf("������10������:\n");
//	for (q = p; q< p +10; q++)//ͨ��ָ�����η��ʺ͸�ֵ����ĸ���Ԫ��
//	{
//		scanf("%d",q);//����ı�����ָ��
//	}
//}
//
//
//
//void paixu(int *p,int n)//ð���㷨
//{
//	int i, j, t;
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = 0; j < n - 1 - i;j++)
//		{
//			if (p[j] > p[j + 1])//����p[]������ʽ������ָ�������Ԫ��
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
//	printf("����������Ϊ��");
//	for (q = p; q < p + 10; q++)
//	{
//		printf("%d ", *q);//�������ӡ���� ������
//	}
//
//}



// 2 ��10��������ʹǰ�����˳�������2��λ�ã����2���������ǰ2������ʹ�ú���ʵ�ִ˹��ܣ���������������10������������������10������
#include<stdio.h>
void paixu(int* p,int n);
int main()
{
	int arr[10],*q;
	printf("������10������");
	for(q = arr; q<arr+10;q++)
	{
		scanf("%d", q);
	}
	 paixu(arr,10);
	 printf("��������Ϊ��");
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
//���㷨Ϊ�Ȱ�10�����е�9��10�������ⴢ��������Ȼ����ѭ�������Ե�9����Ϊ��㣨���ĵ㣩����ǰһ��������8��������ָ�븳ֵ����һ������10��
//Ȼ�����ĵ������ƶ������ΰ����ĵ�ǰ����������������ĵ�Ϊ��2��ʱֹͣ����ʱ���˵�1,2����ȫ�������ɹ����ٰ�֮ǰ���ⴢ��ĵ�9,10��