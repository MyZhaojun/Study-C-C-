#include<stdio.h>
int del_num(int* p, int n, int x) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (*(p + i) != x) {
			*(p + count) = *(p + i);
			count++;
		}
	}
	return count;
}
int main() {
	int a[10], num, x;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &x);
	num = del_num(a, 10, x);
	for (int i = 0; i < num; i++) {
		printf("%d", a[i]);
		if (i != num - 1) {
			printf(" ");
		}
	}
	return 0;
}