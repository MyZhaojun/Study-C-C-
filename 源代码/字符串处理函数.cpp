#include<stdio.h>
#include<string.h>
int main() {
	int len, n;
	char a[10] = "Hello";
	char b[10] = "Welcome";
	len = strlen(a);	//计算字符串长度
	strcpy(b, a);		//把字符串a覆盖到b字符串数组，从首地址开始
	strcat(b, a);		//把字符串a连接到b的末尾，覆盖原来的\0
	n = strcmp(a, b);	//比较两个字符串大小，返回值为0时两者大小相等，1时前一个大，-1时后一个大
	return 0;
}
