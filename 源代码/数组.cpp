#include<iostream>
using namespace std;
int main() {
	int a[5];			//���Ǵ��������һ�ַ�ʽ
	for (int i = 0; i < 5; i++) {
		a[i] = i + 1;
		cout << a[i] << endl;
	}
	int b[5] = { 6,7,8 };		//�����û�д������Զ���Ϊ0
	for (int j = 0; j < 5; j++) {
		cout << b[j] << endl;
	}
	return 0;
}