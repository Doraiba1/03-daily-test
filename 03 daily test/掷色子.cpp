#include<iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	int d1, d2, f1, f2, c1, c2; //f1,f2�����ܼ�����ܵ���    d1,d2������¼�ϳ��ε���   c1,c2��¼�ó��ε���
	d1 = 0;
	d2 = 0;
	f1 = 0;
	f2 = 0;
	c1 = 0;
	c2 = 0;
	int times = 0;
	cout << "������������ĳ���:  " << endl;
	cin >> times;
	for (int i = 0; i < times; i++)
	{
		d1 = f1;
		d2 = f2;
		f1 = d1 + rand() % 6 + 1;
		f2 = d2 + rand() % 6 + 1;
		c1 = f1 - d1;
		c2 = f2 - d2;
		cout << "��" << i + 1 << "�غ�player 1���ܵ���Ϊ:  " << f1 << endl;
		cout << "��" << i + 1 << "�غ�player 2���ܵ���Ϊ:  " << f2 << endl;
		if (c1 > c2)
		{
			cout << "��" << i + 1 << "�غ�player 1 ��ʤ!" << endl;
		}
		else if (c1 < c2)
		{
			cout << "��" << i + 1 << "�غ�player 2 ��ʤ!" << endl;
		}
		else
		{
			cout << "��" << i + 1 << "�غϴ�ƽ" << endl;
		}
		
	}
	if (f1 > f2)
	{
		cout << "player 1 ��ʤ!" << endl;
	}
	else if (f1 < f2)
	{
		cout << "player 2 ��ʤ!" << endl;
	}
	else
	{
		cout << "��ƽ!" << endl;
	}



	system("pause");

	return 0;
}