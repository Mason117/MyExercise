#pragma once
class TicketMachine
{
public:
	TicketMachine();//�����������캯��	
	~TicketMachine();//�����������ͷ��ڴ�
	//���еķ�����ֵ,���з����Ĳ���,д�ļ�ʱ��Ӧ����дͷ�ļ��Ĵ�٣��پ����ȥ����дӦ�ô��롣
	//�����Ƿ�����
	void showPrompt();
	void insertMoney(int money);
	void showBalance();
	void showTotal();
	void printTickets();
	//�����Ǳ�����
	const int PRICE;
	int balance;
	int total;

};

