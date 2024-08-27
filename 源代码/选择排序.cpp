#include<stdio.h>
int main() {
	int a[10];
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
	}
	int min, temp;
	for (int i = 0; i < 9; i++) {
		min = i;
		for (int j = i; j < 10; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}
		temp = a[min];
		a[min] = a[i];
		a[i] = temp;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}