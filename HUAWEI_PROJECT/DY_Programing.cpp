#include <iostream>
#include <algorithm>
/*
using namespace std;
const int N = 15;//没什么别的意思，就是设置一下数组的最大范围

int main(int argc, char* argv[])
{
	int V[N] = { 0,8,10,6,3,7,2 };//物品的价值
	int W[N] = { 0,4,6,2,2,5,1 };//物品的重量

	int m[N][N];//建表
	int n = 6, c = 12;//一共有6个物品， 背包能背下12重量的物品
	memset(m, 0, sizeof(m));//初始化数组， 一般参数为0或者-1， 因为memset以字节为单位，初始化后结果是0或者1.

							//这个表是多处一行和一列的，在坐上角方向，正向的开始，递归的尽头。 
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			if (j >= W[i])
			{   //要明白状态转化方程啊。
				m[i][j] = max(m[i][j - 1], m[i - 1][j - W[i]] + V[i]);//等于上一行减掉重量的值+当前物品的价值
			}
			else
			{
				m[i][j] = m[i - 1][j];//等于上面的值
			}
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			cout << m[i][j] << ' ';
		}
		cout << endl;
	}

	//目前还缺少了回追的代码,等会看笔记.
	system("pause");
}
*/