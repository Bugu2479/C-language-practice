#include<stdio.h>
//�ṹ��

struct b
{
	char c;
	short s;
	double d;
};

struct stu//struct Ϊ�ṹ��ؼ��֣�stuΪ���������ṹ�����ɲ�ͬ���͵�ֵ����ɵ�
{
	//��Ա����������Ϊ���������飬...
	struct b sb;//�ṹ�����
	char name[20];
	int age;
	char id[20];
}s1, s2;//����˳����������������s1��s2Ϊȫ�ֱ���

int main()
{
	struct stu s = { {'w',20,3.14},"�°�",30,"4654846844" };//s �Ƕ��󣬳�ʼ����������һ������ʶ֮��
	printf("%s", s.id);//�ṹ��ĳ�Աͨ�� .�� -> ����
	struct stu* ps = &s;//�ṹ��ָ�룬ָ��s
	printf("%c\n", (*ps).sb.c);
	printf("%c\n", ps->sb.c);

	return 0;
}


void print1(struct stu t)//��ֵ����
{
	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
}


void print2(struct stu* ps)//��ַ����
{
	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
}
//p1��p2 �ǲ�ͬ�Ĵ��ݽṹ������ķ���������p2��p11��һ�㣬��Ϊp2�����޸Ľṹ��Ĳ��������ÿ��ٶ���Ŀռ�Ͳ���ѹջ
//Ч�ʸ��ߣ����ǰ�ȫ��С������Ҳ������const ������߰�ȫ��
int main()
{

	struct stu s = { {'w',20,3.14},"�°�",30,"4654846844" };
	print1(s);
	print2(&s);
	return 0;
}
