#include "TicketMachine.h"


#include <iostream>
using namespace std;

TicketMachine::TicketMachine():PRICE(0),balance(0)//��ʼ������Ϊ0��ͨ��C++���붼����ô��ʼ����ĳ����ġ�
{
	total = 0;

}

TicketMachine::~TicketMachine()//����Ǵݻ�ʵ��ʱ�õ��ģ�destructor�����������������������
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
