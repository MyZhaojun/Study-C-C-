#include<stdio.h>
#include<string.h>
int main() {
	int N;
	char str[100][81];
	char* max = NULL;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%80s", str[i]);
		if (max == NULL || strcmp(max, str[i]) < 0) {
			max = str[i];
		}
	}
	printf("%s", max);
	return 0;
}