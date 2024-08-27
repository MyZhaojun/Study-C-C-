#include<stdio.h>
int main() {
	FILE* fp;
	int ch;
	if (!(fp = fopen("d:\\text.txt", "r"))) {
		printf("error");
		return 1;
	}
	ch = fgetc(fp);
	while (ch != EOF) {
		printf("%c", ch);
		ch = fgetc(fp);
	}
	fclose(fp);
	return 0;
}