#include<iostream>
using namespace std;
int main() {
	int Shuzu[9];
	for (int i = 0; i < 9; i++) {
		Shuzu[i] = i + 1;
		cout << Shuzu[i] << endl;
	}
	int start = 0;
	int end = sizeof(Shuzu)/sizeof(Shuzu[0]) - 1;
	int temp;
	while (start < end){
		temp = Shuzu[start];
		Shuzu[start] = Shuzu[end];
		Shuzu[end] = temp;
		start++;
		end--;
	}
	for (int j = 0; j < 9; j++) {
		cout << Shuzu[j] << endl;
	}
	return 0;
}