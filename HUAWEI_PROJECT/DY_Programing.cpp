#include <iostream>
#include <algorithm>
/*
using namespace std;
const int N = 15;//ûʲô�����˼����������һ����������Χ

int main(int argc, char* argv[])
{
	int V[N] = { 0,8,10,6,3,7,2 };//��Ʒ�ļ�ֵ
	int W[N] = { 0,4,6,2,2,5,1 };//��Ʒ������

	int m[N][N];//����
	int n = 6, c = 12;//һ����6����Ʒ�� �����ܱ���12��������Ʒ
	memset(m, 0, sizeof(m));//��ʼ�����飬 һ�����Ϊ0����-1�� ��Ϊmemset���ֽ�Ϊ��λ����ʼ��������0����1.

							//������Ƕദһ�к�һ�еģ������ϽǷ�������Ŀ�ʼ���ݹ�ľ�ͷ�� 
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			if (j >= W[i])
			{   //Ҫ����״̬ת�����̰���
				m[i][j] = max(m[i][j - 1], m[i - 1][j - W[i]] + V[i]);//������һ�м���������ֵ+��ǰ��Ʒ�ļ�ֵ
			}
			else
			{
				m[i][j] = m[i - 1][j];//���������ֵ
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

	//Ŀǰ��ȱ���˻�׷�Ĵ���,�Ȼῴ�ʼ�.
	system("pause");
}
*/