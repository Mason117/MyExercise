#include <set>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/* int main(int argc, char* argv[])
{
	int sum = 0;
	while (cin >> sum)//既能复制sum,又能检测是否持续输入.
	{
		int tmp = 0;
		set<int> num;

		for (int i = 0; i<sum; i++)
		{
			cin >> tmp;
			num.insert(tmp);
		}
		set<int>::iterator it;
		for (it = num.begin(); it != num.end(); it++)//set不支持随机访问
		{
			cout << *it<< endl;
		}
	}
	return 0;
}*/

/*vector<int> Process(vector<int> &data, int length)
{
	//C++ 编译的顺序是从上往下的,不同于JAVA, 同一个文件中, 函数要写在main上面才能引用到.
	//函数命名要大写,驼峰命名
	int temp;
	vector<int>result;
	for (int i = 0; i < length; i++)
	{
		temp = data[i];
		for (int j = i + 1; j < length; j++)
		{
			if (temp == data[j])
			{
				data[j] = -1;//重复元素变成特殊值
			}
		}
	}
	for (int i = 0; i<length;i++)
	{
		if (data[i]!=-1)
		{
			result.push_back(data[i]);//去掉所有特殊值
		}
	}
	sort(result.begin(), result.end());//用<algorithm>自带的排序函数
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

//更简单的一个实现
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
