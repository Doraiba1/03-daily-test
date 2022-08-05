#include<iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	int d1, d2, f1, f2, c1, c2; //f1,f2用来总计玩家总点数    d1,d2用来记录上场次点数   c1,c2记录该场次点数
	d1 = 0;
	d2 = 0;
	f1 = 0;
	f2 = 0;
	c1 = 0;
	c2 = 0;
	int times = 0;
	cout << "请输入想游玩的场数:  " << endl;
	cin >> times;
	for (int i = 0; i < times; i++)
	{
		d1 = f1;
		d2 = f2;
		f1 = d1 + rand() % 6 + 1;
		f2 = d2 + rand() % 6 + 1;
		c1 = f1 - d1;
		c2 = f2 - d2;
		cout << "第" << i + 1 << "回合player 1的总点数为:  " << f1 << endl;
		cout << "第" << i + 1 << "回合player 2的总点数为:  " << f2 << endl;
		if (c1 > c2)
		{
			cout << "第" << i + 1 << "回合player 1 获胜!" << endl;
		}
		else if (c1 < c2)
		{
			cout << "第" << i + 1 << "回合player 2 获胜!" << endl;
		}
		else
		{
			cout << "第" << i + 1 << "回合打平" << endl;
		}
		
	}
	if (f1 > f2)
	{
		cout << "player 1 获胜!" << endl;
	}
	else if (f1 < f2)
	{
		cout << "player 2 获胜!" << endl;
	}
	else
	{
		cout << "打平!" << endl;
	}



	system("pause");

	return 0;
}