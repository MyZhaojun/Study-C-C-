#include<stdio.h>
#include<math.h>
int check(int a) {
	int sum = 0;
	for (int i = 1; i < a; i++) {
		if (a % i == 0) {
			sum += i;
		}
	}
	if (sum == a) {
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	int a;
	scanf("%d", &a);
	if (check(a) == 1) {
		printf("是完数");
	}
	else {
		printf("不是完数");
	}
	return 0;
}