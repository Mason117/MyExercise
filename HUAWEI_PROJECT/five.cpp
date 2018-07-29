#include <iostream>
#include <string>

using namespace std;
/*
 string getResult(long ulDataInput);//先声明,再在下面写实现.

int main() {
	//首先复习一下分解质因数,短除法. 
	long num;
	while (cin >> num)
		cout << getResult(num);
	return 0;
}

string getResult(long ulDataInput)
{
	string result;
	while (ulDataInput != 1)
	{
		for (int i = 2; i <= ulDataInput; i++)
		{
			if (ulDataInput%i == 0)
			{
				string temp = to_string(i);
				result += temp + ' ';
				ulDataInput = ulDataInput / i;
				break;
			}

		}
	}
	return result;
}
 */

/*
 int main()
{
	float input;
	while (cin>>input)
	{
		input += 0.5;
		cout << static_cast<int>(input)<< endl;//还有其他的类型转换,dynamic等
		//cout << int(input)<< endl;
		//cout << (int)input<< endl;           //C风格的转化语句
	}
}
*/