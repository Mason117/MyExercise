//Source.cppͨ������������main�������ڵ��ļ�

#include "TicketMachine.h"
#include <cstdlib>
//����Ҫ�����ļ���ͷ�ļ�

int main(int argc, char* argv[])
{
	TicketMachine one_machine;
	one_machine.showPrompt();
	one_machine.insertMoney(100);
	one_machine.showBalance();
	system("Pause");
}
