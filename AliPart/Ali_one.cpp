#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//下面两个定义没什么用处，复习一下define
#define MAX 2147493647
#define MIN -2147483648

int main(int argc, char* argv[])
{
	int n;
	int k, d;
	vector<int> a(51);

	while (cin >> n)
	{
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		cin >> k >> d;
		//二维vector数组的实现，因为不知道最后的最大值到底有多大，所以用longlong
		//vector（1，2）第二个参数是初始化时的预设值,下面这个预设参数又是一个数组，所以是二维数组。
		vector<vector<long long>> max_value(n + 1, vector<long long>(k + 1, 0));
		//因为有正数和负数，负负得正，所以要列两个表去更新出最大值
		vector<vector<long long>> min_value(n + 1, vector<long long>(k + 1, 0));

		//初始化
		for (int i = 1; i < n+1; i++) {
			max_value[i][1] = a[i];
			min_value[i][1] = a[i];
		}

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= k; j++)
			{
				for (int k1 = max(1, i - d); k1 < i; k1++)
				{
					//因为要在局部循环k1次，所以要不断的更新当前坐标的值，确保是最大值。
					//还是和之前的背包问题一样，这个算出来并不知道具体路径，只知道最大值是多少。
					max_value[i][j] = max(max_value[i][j], max(max_value[k1][j] * a[i], min_value[k1][j] * a[i]));
					min_value[i][j] = min(min_value[i][j], min(max_value[k1][j] * a[i], min_value[k1][j] * a[i]));

				}
			}
		}
		long long theMax = max_value[k][k];//从正方形的右底角开始
		for (int i = k + 1; i<n + 1; i++)
		{
			theMax = max(theMax, max_value[i][k]);
		}
		cout << theMax << endl;
		//我的小改变，git测试
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= k; j++)
			{
				cout << max_value[i][j] << ' ';
			}
			cout << endl;
		}

	}

}
