#include <set>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/* int main(int argc, char* argv[])
{
	int sum = 0;
	while (cin >> sum)//���ܸ���sum,���ܼ���Ƿ��������.
	{
		int tmp = 0;
		set<int> num;

		for (int i = 0; i<sum; i++)
		{
			cin >> tmp;
			num.insert(tmp);
		}
		set<int>::iterator it;
		for (it = num.begin(); it != num.end(); it++)//set��֧���������
		{
			cout << *it<< endl;
		}
	}
	return 0;
}*/

/*vector<int> Process(vector<int> &data, int length)
{
	//C++ �����˳���Ǵ������µ�,��ͬ��JAVA, ͬһ���ļ���, ����Ҫд��main����������õ�.
	//��������Ҫ��д,�շ�����
	int temp;
	vector<int>result;
	for (int i = 0; i < length; i++)
	{
		temp = data[i];
		for (int j = i + 1; j < length; j++)
		{
			if (temp == data[j])
			{
				data[j] = -1;//�ظ�Ԫ�ر������ֵ
			}
		}
	}
	for (int i = 0; i<length;i++)
	{
		if (data[i]!=-1)
		{
			result.push_back(data[i]);//ȥ����������ֵ
		}
	}
	sort(result.begin(), result.end());//��<algorithm>�Դ���������
	return result;
}

int main(int argc, char* argv[])
{
	int number;
	while (cin >> number)
	{
		vector<int> list;
		int temp;
		for (int i = 0; i < number; i++)
		{
			cin >> temp;
			list.push_back(temp);
		}
		vector<int> result = Process(list, number);
		for (int i = 0; i < result.size(); i++)
		{
			cout << result[i] << endl;
		}
	}
}
*/

//���򵥵�һ��ʵ��
/*
 int main(int argc, char* argv[])
{
	int num;
	vector<int> id(1001,0);
	while (cin>>num)
	{
		int temp;
		for (int i=0;i<num;i++)
		{
			cin >> temp;
			id[temp]++;
		}

		for (int i=0; i<1001;i++)
		{
			if (id[i]>0)
			{
				cout << i << endl;
			}
		}
	}
}
*/
