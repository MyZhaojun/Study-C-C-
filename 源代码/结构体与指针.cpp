#include<stdio.h>
struct student {
	char name[10];
	int num;
};
int main() {
	struct student stu1 = { "Lihua",240101 };
	struct student* pstu;
	pstu = &stu1;
	printf("%s %d\n", stu1.name, stu1.num);
	printf("%s %d", pstu->name, pstu->num);		//���������������˼��������ָ��ĺ���һ������ȻҲ����д��(*pstu).name
	return 0;
}