#include<iostream>
using namespace std;
int main() {
	for (int i = 0; i < 15; i++) {
		cout << i <<endl;
		if (i == 2) {
			continue;		//����ѭ��ִ�е�����Ͳ�ִ���ˣ�ֱ�ӽ����´�ѭ��
		}
		cout << "*" ;
		if (i == 13) {
			break;			//�����Ժ����е�ѭ��
		}
	}
	return 0;
}							//goto ��������ָ��λ�ã�����Ҫ���Լ�������֣�Ȼ��������������λ�÷���'����:'������