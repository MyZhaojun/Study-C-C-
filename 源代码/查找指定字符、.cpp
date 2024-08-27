#include<stdio.h>
#include<string.h>
char F(char* str, int k) {
	int count = 1;
	char cur = str[0];
	for (int i = 1; i <= strlen(str); i++) {
		if (i<strlen(str) && str[i] == cur) {
			count++;
		}
		else {
			if (count >= k) {
				return cur;
			}
			count = 1;
			if (i < strlen(str)) {
				cur = str[i];
			}

		}
	}
	return 'N';
}
int main() {
	int k;
	char str[101];
	scanf("%d", &k);
	scanf("%100s", str);
	char result = F(str,k);
	if (result == 'N') {
		printf("NO");
	}else {
		printf("%c", result);
	}
	return 0;
}