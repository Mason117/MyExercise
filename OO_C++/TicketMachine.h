#pragma once
class TicketMachine
{
public:
	TicketMachine();//构造器，构造函数	
	~TicketMachine();//析构函数，释放内存
	//类中的方法和值,还有方法的参数,写文件时，应该先写头文件的大纲，再具体的去类里写应用代码。
	//以下是方法：
	void showPrompt();
	void insertMoney(int money);
	void showBalance();
	void showTotal();
	void printTickets();
	//以下是变量：
	const int PRICE;
	int balance;
	int total;

};

