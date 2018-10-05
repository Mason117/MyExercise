/*
 *exercise from 9.17, to learn more about C++, not just for company test 
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
//strcpy是复制，strcat是拼接，如果用string类型的话可以直接用‘ + '来拼接字符串
/*
 * 两个字符串自左向右逐个字符相比（按ASCII值大小相比较），直到出现不同的字符或遇’\0’为止。
 * 当两个数的位数一样，则直接可以应用字符串的比较。如"1346" > "1111" == true
 * 123也可以和abc比较
 * 
 * 这样看来用char比用integer有时候有用啊
 */

string element[101];
bool sortFunction(string s1, string s2)
{
	return (s2 + s1) > (s1 + s2);//应该和java一样，只要是大就换
}

int main(int argc, char* argv[])
{
	int n;
	while (cin>>n)
	{
		for (int i=0;i<n;i++)//不论是C++还是java，都是用；分割i的三个条件
		{
			cin >> element[i];
			sort(element, element + n, sortFunction);//C++用数组做参数， 意思就是传入数组第一个元素的地址， element+n是结束地址
		}
	}
}
