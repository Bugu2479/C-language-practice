#define _CRT_SECURE_NO_WARNINGS 1
//define��������ڵ�һ��


#include <stdio.h>


int main()
{
	printf("bite\n");
	printf("bite\n");
	printf("%d\n", 100);
	printf("%d\n",sizeof(char));
	return 0;
}
//һ�����̿����ж��Դ�ļ��������Դ�ļ�ֻ����һ��������
//\n����ʹ��ӡ����
//����һ�д������ӷֺ�   ;   ���� �� ������ʾ���;



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
//Ҳ���� int age;�ٶ��� age = 20; ��int a,b,c; ���ǲ���int a=b=c;
// ������%d��ʾ�������ȸ������� %s   ��˫���ȸ�������%lf��ʾ;
//��ʶ����ͷ����Ϊ��ĸ���»��ߣ��ϸ����ִ�Сд����ò�Ҫ����8λ���е�C����ֻ��ʶ��ǰ8λ���ᱻ��Ϊ��ͬһ��ʶ��
//�������ֽб�ʶ�����ǳ��������ֽ�ʲô������

int a = 100;
int main()
{
	int b = 10;
		printf("%d\n", a);
	return 0;
}
//ȫ�ֱ������������κεط������Ҫ��ͬһ���̵Ĳ�ͬ�ļ������У�������һ���ļ�����������;
//�ֲ�����ֻ���������ڵ�������ʹ�ã���ȫ�ֱ���Ӧ��ֲ�������Ҫ����;



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
//%d��ʾ��������,�����Ҫ���������������������뵽a�� b;