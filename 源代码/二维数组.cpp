#include<iostream>
using namespace std;
int main() {
	int Shuzu1[2][3];			//��һ�ֶ��巽ʽ
	Shuzu1[0][0] = 1;
	Shuzu1[0][1] = 2;
	Shuzu1[0][2] = 3;
	Shuzu1[1][0] = 4;
	Shuzu1[1][1] = 5;
	Shuzu1[1][2] = 6;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << Shuzu1[i][j] << endl;
		}
	}
	int Shuzu2[2][3] = {{1,2,3},{4,5,6}};		//�ڶ��ֶ��巽ʽ
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << Shuzu2[i][j] << endl;
		}
	}
	/*
	�������ֶ��巽ʽ��Shuzu[2][3] = {1,2,3,4,5,6},Shuzu[][3] = {1,2,3,4,5,6}
	*/
	return 0;
}