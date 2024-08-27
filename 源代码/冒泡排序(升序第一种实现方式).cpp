#include<iostream>
using namespace std;
int main() {
	int Shuzu[9] = { 2,4,5,6,7,8,90,1,2 };
	int Len = sizeof(Shuzu) / sizeof(Shuzu[0]);
	cout << "Before the resort" << endl;
	for (int i = 0; i < 9; i++) {
		cout << Shuzu[i] << "\t";
	}
	for (int j = 0; j < Len; j++) {
		for (int k = Len; k > j; k--) {
			if (Shuzu[k] < Shuzu[k - 1]) {
				int temp = Shuzu[k];
				Shuzu[k] = Shuzu[k - 1];
				Shuzu[k - 1] = temp;
			}
		}
	}
	cout << "After the resort" << endl;
	for (int l = 0; l < Len; l++) {
		cout << Shuzu[l] << "\t";
	}
	return 0;
}