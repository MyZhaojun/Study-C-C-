#include<iostream>
using namespace std;
int main() {
	int a[5];			//这是创建数组的一种方式
	for (int i = 0; i < 5; i++) {
		a[i] = i + 1;
		cout << a[i] << endl;
	}
	int b[5] = { 6,7,8 };		//如果你没有存满，自动补为0
	for (int j = 0; j < 5; j++) {
		cout << b[j] << endl;
	}
	return 0;
}