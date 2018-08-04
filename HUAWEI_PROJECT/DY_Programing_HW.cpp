#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
int main11() {
	int money, number;
	cin >> money >> number;
	/*
	* ������仰��C++�����Ǵ���ģ�����ͨ�����룬����Ǿ�̬�ģ�����Ҫ��ȷ�������ֲ��ܷ����ڴ棬
	* Ҫ�붯̬�ĸ�������ֵ�������ڴ棬 Ҫ�õ���̬���飬New��ָ��֮��Ķ���
	* ��vector���ʾ���һ����̬���飬���������Ǹ�vector������û������ġ�
	* ��Ҳ��Ϊʲô���߿���һ�㶼���������ֵ�����޺����ޡ�
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

	for (int i = 1; i <= number; i++) //��1��ʼ, ����
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