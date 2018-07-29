#include <iostream>
#include <vector>
#include <string>



/*int main(int argc, char* argv[])
{
	std::string str;
	int count = 0;
	while (std::getline(std::cin, str))
	{
		int i = 0;
		while (str[i] != '\0')//这个代表字符串的输入结束
		{
			if (str[i] == ' ')
			{
				count = 0;
			}
			else
			{
				count++;
			}
			i++;
		}
		std::cout << count << std::endl;
	}
} */

/* using namespace std;
int main(int argc, char* argv[])
{
	string str;
	while (getline(cin,str))
	{
		int count = 0;
		bool out = true;
		cout <<"the total length of that string is "<< str.length() << endl;
		for (int i=str.length()-1;i>=0;i--)//matlab 用多了,忘记传统编译语言索引从0开始, 最后一个的索引是长度减1
		{
			if (out && str[i]==' ')
			{
				continue;
			}
			else if(str[i]!=' ') {
				out = false;
				count++;
			}
			else
			{
				break;
			}
		}
		cout << "the length of last word is " << count << endl;
	}

} */


/* using namespace std;

int main(int argc, char* argv[])
{
	string str;
	getline(cin,str);
	char a;
	cin>>a;
	int count = 0;
	if (isupper(a)) a = tolower(a);
	for (int i=0; i< str.length();i++)
	{
		char letter = tolower(str[i]);
		if (letter==a)
		{
			count++;
		}
	}
	cout << count;

	cin.clear(); 
	cin.sync();
	cin.get();//不明白为什么这里cin.get不管用,窗口依然关闭
	//system("pause");//只在windows平台上有用.
}
*/