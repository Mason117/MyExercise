#include<iostream>
#include <string>

using namespace std;

bool checking(string& temp)
{
	bool result = false;
	int length1 = temp.size();
	switch (length1)
	{
	case 2:
		if (temp[1] >= '0'&&temp[1] <= '9')
		{
			result = true;
		}
		break;
	case 3:
		if ((temp[1] >= '0'&&temp[1] <= '9') && (temp[2] >= '0'&&temp[2] <= '9'))
		{
			result = true;
		}
	default:
		result = false;
	}
	return result;
}

int main() {
	string str;
	pair<int, int> coor(0, 0);
	getline(cin, str);

	size_t found = str.find(";");
	int start = 0;

	while (found != std::string::npos)
	{
		int length = found-start;
		string temp = str.substr(start, length);
		start = found + 1;
		found = str.find(";", start);

		if (temp.size()==3||temp.size() == 2)
		{
			bool check = checking(temp);
			if (check)
			{
				char temp_type = temp[0];
				int temp_number = atoi(temp.substr(1, 2).c_str());
				switch (temp_type)
				{
				case 'A':
					coor.first -= temp_number;
					break;
				case 'D':
					coor.first += temp_number;
					break;
				case 'W':
					coor.second += temp_number;
					break;
				case 'S':
					coor.second -= temp_number;
					break;
				}
			}
		}
	}
	cout << coor.first << ',' << coor.second << endl;

}