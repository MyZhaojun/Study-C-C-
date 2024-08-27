#include<stdio.h>
int main() {
	FILE* fp;
	int ch;
	if (!(fp = fopen("d:\\text.txt", "a"))) {
		printf("error");
		return 1;
	}
	ch = getchar();
	while (ch != EOF) {
		fputc(ch, fp);
		ch = getchar();
	}
	fclose(fp);
	return 0;
}