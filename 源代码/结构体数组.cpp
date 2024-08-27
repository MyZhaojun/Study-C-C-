#include<stdio.h>
struct student {
	int score;
	char name[10];
};
int main(){
	struct student stu[3] = {
		{12,"LI"},{14,"Wang"},{10,"Zhang"}
	};
	struct student* p = stu;
	int sum = 0;
	for (; p < stu+3; p++) {
		printf("stu%d : %s %d\n", p - stu, p->name, p->score);
		sum += p->score;
	}
	printf("%d", sum);
	return 0;
}