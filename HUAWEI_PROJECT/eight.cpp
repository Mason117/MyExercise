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
		if (sentence[i] == ' ')//ע�⣬ ���������ַ���string��char����һ��ת���ַ�\0�������жϵ����ַ���ʱ��Ҫ�õ����š� 
		{
			//ע�⣬ substr����������һ������ʼλ�ã��������λ�õ��ַ��� ����һ���Ǵ���ʼλ��Ҫ��ȡ�ĳ��ȡ�
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
	// ʹ��stack������������
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
	while (!test.empty())//ֻҪջ���գ�ѭ��
	{
		std::cout << test.top();//�����һ����Ȼ����pop���Ԫ��
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