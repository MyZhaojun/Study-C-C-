#include<stdio.h>
#include<string.h>
int main() {
	int len, n;
	char a[10] = "Hello";
	char b[10] = "Welcome";
	len = strlen(a);	//�����ַ�������
	strcpy(b, a);		//���ַ���a���ǵ�b�ַ������飬���׵�ַ��ʼ
	strcat(b, a);		//���ַ���a���ӵ�b��ĩβ������ԭ����\0
	n = strcmp(a, b);	//�Ƚ������ַ�����С������ֵΪ0ʱ���ߴ�С��ȣ�1ʱǰһ����-1ʱ��һ����
	return 0;
}
