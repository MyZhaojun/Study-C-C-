#include<stdio.h>
int F(int n) {
	if (n == 0 || n == 1) {
		return n;
	}
	else {
		return F(n - 1) + F(n - 2);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", F(n));
	return 0;
}