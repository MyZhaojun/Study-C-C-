#include<iostream>
using namespace std;
int main() {
	for (int i = 0; i < 15; i++) {
		cout << i <<endl;
		if (i == 2) {
			continue;		//本次循环执行到这里就不执行了，直接进入下次循环
		}
		cout << "*" ;
		if (i == 13) {
			break;			//跳过以后所有的循环
		}
	}
	return 0;
}							//goto 就是跳到指定位置，后面要接自己起的名字，然后在你想跳到的位置放上'名字:'就行了