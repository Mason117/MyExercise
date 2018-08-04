#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
int main11() {
	int money, number;
	cin >> money >> number;
	/*
	* 下面这句话在C++里面是错误的，不能通过编译，这个是静态的，必须要有确定的数字才能分配内存，
	* 要想动态的更具输入值来分配内存， 要用到动态数组，New，指针之类的东西
	* 而vector本质就是一个动态数组，所以下面那个vector代码是没有问题的。
	* 这也是为什么在线考试一般都会告诉你数值的上限和下限。
	*/
	//int value [number];  
	//vector<int> value(number);

	int value[61];
	int cost[61];
	int type[61];
	int map[61][3210];

	for (int i = 0; i<61; i++)
	{
		memset(map[i], 0, sizeof(map[i]));
	}

	for (int i = 1; i <= number; i++) //从1开始, 输入
	{
		int temp;
		cin >> cost[i] >> temp >> type[i];
		value[i] = temp * cost[i];
	}

	for (int i = 1; i <= number; i++)
	{
		for (int j = 1; j <= money / 10; j++)
		{
			if (type[i] == 0)
			{
				if (j >= cost[i] / 10)
				{
					map[i][j] = max(map[i - 1][j], map[i - 1][j - cost[i] / 10] + value[i]);
				}
			}
			if (type[i]>0)
			{
				if (j >= (cost[i] + cost[type[i]]) / 10)
				{
					map[i][j] = max(map[i - 1][j], map[i - 1][j - cost[i] / 10] + value[i]);
				}
			}
		}
	}
	cout << map[number][money / 10] << endl;
	return 0;
}