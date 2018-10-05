//Source.cpp通常就是启动的main函数所在的文件

#include "TicketMachine.h"
#include <cstdlib>
//这里要加类文件的头文件

int main(int argc, char* argv[])
{
	TicketMachine one_machine;
	one_machine.showPrompt();
	one_machine.insertMoney(100);
	one_machine.showBalance();
	system("Pause");
}
