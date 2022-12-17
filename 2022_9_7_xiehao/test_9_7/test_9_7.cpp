#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//如果遇到scanf返回值被忽略，那应该是程序已经运行起来了
#define MAX 10000

//C语言中常量分为4种 字面常量  const修饰的常变量  define定义的标识符常量  枚举常量
//字面常量:123,a,b,...;
//const 修饰的常变量不能被直接改变;但是其本质还是变量;
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




//define定义的标识符常量
int main()
{
	int n = MAX;
	printf("%d\n", n);
	return 0;
}





//枚举常量 可以一一列举的常量
//enum 为枚举关键字
enum Sex
{
//这种枚举变量的未来可能取值
MALE = 3,//赋初值，原本就有的值
FEMALE,
SECURE,
};
int main()
{
	enum Sex s = MALE;
//MALE = 3；//err
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECURE);
	return 0;
}





//字符串就是一串字符，用双引号括起来的一串字符
int main()
{
	"hello bite";
	"abcdf";
	return 0;
}
#include<string.h>
int main()
{
//字符数组，数组是一组形同类型的元素
//字符串在结尾隐藏了转义字符\0,类似于终止密码子
//双引号为一串字符，单引号为一个字符
	char arr[] = "hello";
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c'};

	//打印字符串
	//发现arr2后面乱码
    //%s 字符串 %c 字符
	printf("%s\n", arr1);
	printf("%s\n", arr2);

	//求一下字符串的长度,arr2为随机值
	int len = strlen("abc");//string length
	printf("%d\n", len);//f10启动
	printf("%d\n", strlen(arr1));//3
	printf("%d\n", strlen(arr2));//随机值
	

	return 0;
}



//9_8
//转义字符 转变了它原来的意思
int main()
{
	printf("c:\test\test.c");
	printf("ab\nr");
	//打不出\t
	//打不出\n
	return 0;
}


int main()
{
	//printf("are you ok ??)");
	//??) 会被转义成]  三字母词 所以用/？来表示?,防止被当作三字母词里面的？
	//vc 6.0 会被打成are you ok]

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
	//\130 把八进制数130 换为十进制88 = ASCII码值为X
	printf("%d\n",strlen("c:\test\328\test.c"));//strlen 为库函数，用来引出字符的长度，在<string.h>文件里
	//\t 和\32 转义后为空格，但其实质还是字符
	return 0;
}





//注释 ctrl 加 k 加c  取消注释 crtl K U  
//真正的注释是用来解释代码的！！！防止过几天后看不懂
int main()
{
	//int a = 10;      //C++的注释风格
    /*int b = 10; */  //C语言注释风格 有缺陷,不支持嵌套注释(注释里面有注释),碰到注释符号就以为注释完成了
	return  0;
}






//选择语句
int main()
{
	int input = 0;//输入的值
	printf("加入bite");
	printf("那要好好学习吗?(1\\0\n");
	scanf_s("%d", &input);
   //&为取缔值符号
	if (input == 1)
	{
		printf("hao offer\n");
	}
	else
	{
		printf("寄\n");//如果输入3，4，5，都是else的结果，寄
		return 0;
	}
}


//2022_9_23
//循环语句
int main()
{
	int line = 0;
	while (line < 30000)
	{
		printf("写代码:%d\n", line);
		line++;
	}
	if (line == 30000)  ////==为关系运算符，和=不一样，=是赋值运算符
	{
		printf("好offer\n");
	}
	return 0;
}






//函数 

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
	//用函数的方式解决问题
	int sum = Add(num1, num2);
	printf("%d\n", sum);
	return 0;
}





//数组
int main()
{
	//int a = 1;
	//int b= 2;
	//int c= 3;
	//int d= 4;
	////如果我要存一组数，那么上面的方式就过于麻烦
	////数组，一组相同类型的元素的集合
	////把十个整形1-10 存起来
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//数组名字叫arr，10个元素，元素类型叫int
	char ch[5] = { 'a','b','c' };//运行发现，有五个字符，为a,b,c,\0,\0,这叫不完全初始化，剩下五个元素的默认为\0
	////如何将数组中的元素全部打印出来？
	////数组是用下标来访问的
	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);//%d后面加空格的原因是防止打印出来的数连在一起
		i++;
	}


	return 0;
}





//9_26
//操作符  算数操作符 + - * / %    %为取余(取模)操作符
//移位操作符 >> <<
int main()
{
	int a = 9 / 2;
	float a = 9 / 2;
	printf("%d", a);
	printf("%f", a);//发现改成单精度浮点数后还是4.0000
	return 0;
	//其实只要除号两端有一个是小数，那么就执行小数除法，得出4.50000
}

int main()
{
	int a = 2;
	int b = a << 1;//左移操作符移动的是二进制位
	return 0;
}


//位操作符  & 按位与   | 按位或    ^ 按位异或

int main()
{
	int a = 5;
	a = a + 5;
	//和a+= 5 ; 是一样的效果

	return 0;
}
//单目操作符
//a + b  +有2个操作数，所以+为双目操作符  
int main()
{
	//0 表示假，非0就是真
	int a = 10;
	printf("%d",!a);//结果为0  ，如果a为0，那么结果为1
	//注意感叹号为英文感叹号

	if (a)
	{
		//如果a为真，做事
	}
	if(!a)
	{
		//如果a为假，做事
	}
	a = -a;  //- 负值
	return 0;
}






//sizeof 是一个操作符，计算类型或变量的大小 后面的括号可以省略，但是求类型不能省略
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//结果为40，计算的是数组的大小，单位是字节，每个元素都为整形，单个大小为4
	//计算一个数组的元素个数
	int sz = sizeof(arr) / sizeof(arr[0]);//结果为10
	printf("%d\n", sz);
	return 0;
}















































	