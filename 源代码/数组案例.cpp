#include<iostream>
using namespace std;
int main() {
	int weight[5] = { 300,200,300,120,134 };
	int max = 0;
	for (int i = 0; i < 5; i++) {
		if (weight[i] > max) {
			max = weight[i];
		}
	}
	cout << max << endl;
	return 0;
}