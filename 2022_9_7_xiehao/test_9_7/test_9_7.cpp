#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�������scanf����ֵ�����ԣ���Ӧ���ǳ����Ѿ�����������
#define MAX 10000

//C�����г�����Ϊ4�� ���泣��  const���εĳ�����  define����ı�ʶ������  ö�ٳ���
//���泣��:123,a,b,...;
//const ���εĳ��������ܱ�ֱ�Ӹı�;�����䱾�ʻ��Ǳ���;
int main()
{
	const  int num = 10;
	num = 20;
	printf("num = %d\n", num);
	int arr[10] = { 0 };
	int n = 10;
	int arr2[n] = { 0 };
	return 0;
}




//define����ı�ʶ������
int main()
{
	int n = MAX;
	printf("%d\n", n);
	return 0;
}





//ö�ٳ��� ����һһ�оٵĳ���
//enum Ϊö�ٹؼ���
enum Sex
{
//����ö�ٱ�����δ������ȡֵ
MALE = 3,//����ֵ��ԭ�����е�ֵ
FEMALE,
SECURE,
};
int main()
{
	enum Sex s = MALE;
//MALE = 3��//err
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECURE);
	return 0;
}





//�ַ�������һ���ַ�����˫������������һ���ַ�
int main()
{
	"hello bite";
	"abcdf";
	return 0;
}
#include<string.h>
int main()
{
//�ַ����飬������һ����ͬ���͵�Ԫ��
//�ַ����ڽ�β������ת���ַ�\0,��������ֹ������
//˫����Ϊһ���ַ���������Ϊһ���ַ�
	char arr[] = "hello";
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c'};

	//��ӡ�ַ���
	//����arr2��������
    //%s �ַ��� %c �ַ�
	printf("%s\n", arr1);
	printf("%s\n", arr2);

	//��һ���ַ����ĳ���,arr2Ϊ���ֵ
	int len = strlen("abc");//string length
	printf("%d\n", len);//f10����
	printf("%d\n", strlen(arr1));//3
	printf("%d\n", strlen(arr2));//���ֵ
	

	return 0;
}



//9_8
//ת���ַ� ת������ԭ������˼
int main()
{
	printf("c:\test\test.c");
	printf("ab\nr");
	//�򲻳�\t
	//�򲻳�\n
	return 0;
}


int main()
{
	//printf("are you ok ??)");
	//??) �ᱻת���]  ����ĸ�� ������/������ʾ?,��ֹ����������ĸ������ģ�
	//vc 6.0 �ᱻ���are you ok]

		printf("%c\n", '\'');
		printf("%s\n","abc");
		printf("%s\n", "a");
		printf("%s\n", "\"");
		printf("%s\n", "'");
		printf("c:\test\test.c");
		printf("\a\a\a\a");
	return 0;
}



int main()
{
	printf("%c", '\130');
	//\130 �Ѱ˽�����130 ��Ϊʮ����88 = ASCII��ֵΪX
	printf("%d\n",strlen("c:\test\328\test.c"));//strlen Ϊ�⺯�������������ַ��ĳ��ȣ���<string.h>�ļ���
	//\t ��\32 ת���Ϊ�ո񣬵���ʵ�ʻ����ַ�
	return 0;
}





//ע�� ctrl �� k ��c  ȡ��ע�� crtl K U  
//������ע�����������ʹ���ģ�������ֹ������󿴲���
int main()
{
	//int a = 10;      //C++��ע�ͷ��
    /*int b = 10; */  //C����ע�ͷ�� ��ȱ��,��֧��Ƕ��ע��(ע��������ע��),����ע�ͷ��ž���Ϊע�������
	return  0;
}






//ѡ�����
int main()
{
	int input = 0;//�����ֵ
	printf("����bite");
	printf("��Ҫ�ú�ѧϰ��?(1\\0\n");
	scanf_s("%d", &input);
   //&Ϊȡ��ֵ����
	if (input == 1)
	{
		printf("hao offer\n");
	}
	else
	{
		printf("��\n");//�������3��4��5������else�Ľ������
		return 0;
	}
}


//2022_9_23
//ѭ�����
int main()
{
	int line = 0;
	while (line < 30000)
	{
		printf("д����:%d\n", line);
		line++;
	}
	if (line == 30000)  ////==Ϊ��ϵ���������=��һ����=�Ǹ�ֵ�����
	{
		printf("��offer\n");
	}
	return 0;
}






//���� 

int	Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	//int sum = num1 + num2;
	//�ú����ķ�ʽ�������
	int sum = Add(num1, num2);
	printf("%d\n", sum);
	return 0;
}





//����
int main()
{
	//int a = 1;
	//int b= 2;
	//int c= 3;
	//int d= 4;
	////�����Ҫ��һ��������ô����ķ�ʽ�͹����鷳
	////���飬һ����ͬ���͵�Ԫ�صļ���
	////��ʮ������1-10 ������
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//�������ֽ�arr��10��Ԫ�أ�Ԫ�����ͽ�int
	char ch[5] = { 'a','b','c' };//���з��֣�������ַ���Ϊa,b,c,\0,\0,��в���ȫ��ʼ����ʣ�����Ԫ�ص�Ĭ��Ϊ\0
	////��ν������е�Ԫ��ȫ����ӡ������
	////���������±������ʵ�
	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);//%d����ӿո��ԭ���Ƿ�ֹ��ӡ������������һ��
		i++;
	}


	return 0;
}





//9_26
//������  ���������� + - * / %    %Ϊȡ��(ȡģ)������
//��λ������ >> <<
int main()
{
	int a = 9 / 2;
	float a = 9 / 2;
	printf("%d", a);
	printf("%f", a);//���ָĳɵ����ȸ���������4.0000
	return 0;
	//��ʵֻҪ����������һ����С������ô��ִ��С���������ó�4.50000
}

int main()
{
	int a = 2;
	int b = a << 1;//���Ʋ������ƶ����Ƕ�����λ
	return 0;
}


//λ������  & ��λ��   | ��λ��    ^ ��λ���

int main()
{
	int a = 5;
	a = a + 5;
	//��a+= 5 ; ��һ����Ч��

	return 0;
}
//��Ŀ������
//a + b  +��2��������������+Ϊ˫Ŀ������  
int main()
{
	//0 ��ʾ�٣���0������
	int a = 10;
	printf("%d",!a);//���Ϊ0  �����aΪ0����ô���Ϊ1
	//ע���̾��ΪӢ�ĸ�̾��

	if (a)
	{
		//���aΪ�棬����
	}
	if(!a)
	{
		//���aΪ�٣�����
	}
	a = -a;  //- ��ֵ
	return 0;
}






//sizeof ��һ�����������������ͻ�����Ĵ�С ��������ſ���ʡ�ԣ����������Ͳ���ʡ��
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//���Ϊ40�������������Ĵ�С����λ���ֽڣ�ÿ��Ԫ�ض�Ϊ���Σ�������СΪ4
	//����һ�������Ԫ�ظ���
	int sz = sizeof(arr) / sizeof(arr[0]);//���Ϊ10
	printf("%d\n", sz);
	return 0;
}















































	