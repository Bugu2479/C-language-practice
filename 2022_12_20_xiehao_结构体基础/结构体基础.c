#include<stdio.h>
//结构体

struct b
{
	char c;
	short s;
	double d;
};

struct stu//struct 为结构体关键字，stu为类型名，结构体是由不同类型的值所组成的
{
	//成员变量，可以为标量，数组，...
	struct b sb;//结构体变量
	char name[20];
	int age;
	char id[20];
}s1, s2;//可以顺带定义变量，这里的s1，s2为全局变量

int main()
{
	struct stu s = { {'w',20,3.14},"章安",30,"4654846844" };//s 是对象，初始化与数组有一定的相识之处
	printf("%s", s.id);//结构体的成员通过 .或 -> 访问
	struct stu* ps = &s;//结构体指针，指向s
	printf("%c\n", (*ps).sb.c);
	printf("%c\n", ps->sb.c);

	return 0;
}


void print1(struct stu t)//传值调用
{
	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
}


void print2(struct stu* ps)//传址调用
{
	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
}
//p1和p2 是不同的传递结构体参数的方法，但是p2比p11好一点，因为p2可以修改结构体的参数，不用开辟额外的空间和参数压栈
//效率更高，但是安全性小，但是也可以用const 修饰提高安全性
int main()
{

	struct stu s = { {'w',20,3.14},"章安",30,"4654846844" };
	print1(s);
	print2(&s);
	return 0;
}
