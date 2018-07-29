#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//������������ûʲô�ô�����ϰһ��define
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
		//��άvector�����ʵ�֣���Ϊ��֪���������ֵ�����ж��������longlong
		//vector��1��2���ڶ��������ǳ�ʼ��ʱ��Ԥ��ֵ,�������Ԥ���������һ�����飬�����Ƕ�ά���顣
		vector<vector<long long>> max_value(n + 1, vector<long long>(k + 1, 0));
		//��Ϊ�������͸�������������������Ҫ��������ȥ���³����ֵ
		vector<vector<long long>> min_value(n + 1, vector<long long>(k + 1, 0));

		//��ʼ��
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
					//��ΪҪ�ھֲ�ѭ��k1�Σ�����Ҫ���ϵĸ��µ�ǰ�����ֵ��ȷ�������ֵ��
					//���Ǻ�֮ǰ�ı�������һ����������������֪������·����ֻ֪�����ֵ�Ƕ��١�
					max_value[i][j] = max(max_value[i][j], max(max_value[k1][j] * a[i], min_value[k1][j] * a[i]));
					min_value[i][j] = min(min_value[i][j], min(max_value[k1][j] * a[i], min_value[k1][j] * a[i]));

				}
			}
		}
		long long theMax = max_value[k][k];//�������ε��ҵ׽ǿ�ʼ
		for (int i = k + 1; i<n + 1; i++)
		{
			theMax = max(theMax, max_value[i][k]);
		}
		cout << theMax << endl;
		//�ҵ�С�ı䣬git����
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
