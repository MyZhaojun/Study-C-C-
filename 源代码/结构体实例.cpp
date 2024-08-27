#include<stdio.h>
struct student {
	char name[10];
	int age;
	float score[5];
	float ave;
};
int main() {
	struct student stu1;
	scanf_s("%s %d", stu1.name,sizeof(stu1.name), &stu1.age);	//这个scanf_s是真的烦死了
	stu1.ave = 0;
	for (int i = 0; i < 5; i++) {
		scanf_s("%f", &stu1.score[i]);
		stu1.ave += stu1.score[i];
	}
	stu1.ave = stu1.ave / 5;
	printf("%f", stu1.ave);
	return 0;
}