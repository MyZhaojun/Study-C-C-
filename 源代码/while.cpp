#include <iostream>
using namespace std;
#include<ctime>
int main()
{
    srand((unsigned int)time(NULL));
    int num = rand() % 101;		//����0-100�������
    int value;
    while (1)
    {
        cin >> value;
        if (value > num)
        {
            cout << "too big" << endl;
        }
        else if (value < num)
        {
            cout << "too small" << endl;
        }
        else
        {
            cout << "congratulations!" << endl;
            break;
        }
    }
    return 0;
}