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
		while (str[i] != '\0')//��������ַ������������
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
		for (int i=str.length()-1;i>=0;i--)//matlab �ö���,���Ǵ�ͳ��������������0��ʼ, ���һ���������ǳ��ȼ�1
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
	cin.get();//������Ϊʲô����cin.get������,������Ȼ�ر�
	//system("pause");//ֻ��windowsƽ̨������.
}
*/