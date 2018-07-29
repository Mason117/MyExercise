#include <iostream>
#include <stack>
#include <string>
/*
using namespace std;

string reverse(string sentence)
{
	string sentence2;
	int point = 0;
	for (int i = sentence.size(); i>-1; i--)
	{
		point++;
		if (sentence[i] == ' ')//注意， 单引号是字符，string是char加了一个转义字符\0，所以判断单个字符的时候要用单引号。 
		{
			//注意， substr两个参数，一个是起始位置，包含这个位置的字符， 另外一个是从起始位置要截取的长度。
			sentence2 += sentence.substr(i + 1, point - 1);
			sentence2 += ' ';
			point = 0;
		}
		if (i == 0)
		{
			sentence2 += sentence.substr(i, point);
		}
	}
	return sentence2;
}

void reverse2(string sentence2)
{
	// 使用stack来完成这个功能
	stack<string> test;
	int point = 0;
	for (int i = 0; i<sentence2.size();i++)
	{	
		if (sentence2[i]==' ')
		{		
			test.push(sentence2.substr(point, i - point));
			point = i + 1;
		}
		if (i== sentence2.size()-1)
		{
			test.push(sentence2.substr(point, sentence2.size() - point));
		}
	}
	while (!test.empty())//只要栈不空，循环
	{
		std::cout << test.top();//输出第一个，然后再pop这个元素
		test.pop();
		if (!test.empty())
		{
			std::cout << ' ';
		}
	}
	std::cout << '\n';
}

int main(int argc, char* argv[])
{
	string theSentence;
	getline(cin, theSentence);
	reverse2(theSentence);
	//string outSentence = reverse(theSentence);
	//cout << outSentence << endl;
	system("pause");
} 
*/