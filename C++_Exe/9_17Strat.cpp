/*
 *exercise from 9.17, to learn more about C++, not just for company test 
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
//strcpy�Ǹ��ƣ�strcat��ƴ�ӣ������string���͵Ļ�����ֱ���á� + '��ƴ���ַ���
/*
 * �����ַ���������������ַ���ȣ���ASCIIֵ��С��Ƚϣ���ֱ�����ֲ�ͬ���ַ�������\0��Ϊֹ��
 * ����������λ��һ������ֱ�ӿ���Ӧ���ַ����ıȽϡ���"1346" > "1111" == true
 * 123Ҳ���Ժ�abc�Ƚ�
 * 
 * ����������char����integer��ʱ�����ð�
 */

string element[101];
bool sortFunction(string s1, string s2)
{
	return (s2 + s1) > (s1 + s2);//Ӧ�ú�javaһ����ֻҪ�Ǵ�ͻ�
}

int main(int argc, char* argv[])
{
	int n;
	while (cin>>n)
	{
		for (int i=0;i<n;i++)//������C++����java�������ã��ָ�i����������
		{
			cin >> element[i];
			sort(element, element + n, sortFunction);//C++�������������� ��˼���Ǵ��������һ��Ԫ�صĵ�ַ�� element+n�ǽ�����ַ
		}
	}
}
