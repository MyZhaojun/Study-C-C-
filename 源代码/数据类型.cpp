#include<iostream>
using namespace std;

int main()
{
	/*
	����ע��
	*/
	//����Ϊ��������ǵ���ע�ͣ�
	int a = 10;//����
#define Day 7 //������define���ͣ�
	const int Month = 12;//������const���ͣ�
	short Duan = 1;//������ 15��
	int Zheng = 2;//���� 31��
	long Chang = 3;//������ 31��
	long long CChang = 4;//�������� 63��
	float Xiaoshu1 = 3.14f;//�����ȸ�������7λ��Ч���֣�
	double Xiaoshu2 = 3.14;//˫���ȸ�������15-16λ��Ч���֣�
	char Zifu = 'a';//ֻ����һ���ַ�
	cout << int(Zifu) << endl;//�����Ӧ��ascall��ֵ
	char Zifuchuan1[] = "Zifuchuan";//C���Է���ַ���
	string Zifuchuan2 = "Zifuchuan";//C++���Է���ַ���
	bool flag = true;//��������true��false
	int b;
	cin >> b;//����
	cout << "a = " << a << endl;
	cout << "���������ڴ�ռ�ÿռ�" << sizeof(CChang) << endl;
	system("pause");
	return 0;
}