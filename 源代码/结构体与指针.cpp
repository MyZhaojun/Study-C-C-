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
	printf("%s %d", pstu->name, pstu->num);		//这个符号真是有意思，就像是指针的含义一样，当然也可以写成(*pstu).name
	return 0;
}