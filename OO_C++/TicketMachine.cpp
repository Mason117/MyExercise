#include "TicketMachine.h"


#include <iostream>
using namespace std;

TicketMachine::TicketMachine():PRICE(0),balance(0)//初始化常量为0，通常C++代码都是这么初始化类的常量的。
{
	total = 0;

}

TicketMachine::~TicketMachine()//这个是摧毁实例时用到的，destructor，消灭对象，析构函数！！！
{
}

void TicketMachine::showPrompt()
{
	cout << "welcome to buy a ticket" << endl;
}
void TicketMachine::insertMoney(int money)
{
	balance += money;
}

void TicketMachine::showBalance()
{
	cout << balance << endl;
}
