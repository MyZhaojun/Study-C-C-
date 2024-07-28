#include<iostream>
using namespace std;

int main()
{
	/*
	多行注释
	*/
	//以下为输出（这是单行注释）
	int a = 10;//变量
#define Day 7 //常量（define类型）
	const int Month = 12;//常量（const类型）
	short Duan = 1;//短整型 15次
	int Zheng = 2;//整型 31次
	long Chang = 3;//长整型 31次
	long long CChang = 4;//长长整型 63次
	float Xiaoshu1 = 3.14f;//单精度浮点数（7位有效数字）
	double Xiaoshu2 = 3.14;//双精度浮点数（15-16位有效数字）
	char Zifu = 'a';//只能有一个字符
	cout << int(Zifu) << endl;//输出对应的ascall码值
	char Zifuchuan1[] = "Zifuchuan";//C语言风格字符串
	string Zifuchuan2 = "Zifuchuan";//C++语言风格字符串
	bool flag = true;//布尔类型true或false
	int b;
	cin >> b;//输入
	cout << "a = " << a << endl;
	cout << "长长整型内存占用空间" << sizeof(CChang) << endl;
	system("pause");
	return 0;
}