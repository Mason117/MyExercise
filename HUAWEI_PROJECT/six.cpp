#include <iostream>
#include <cstring>


/*�����ϵĹ���C++�ṹ���ݵ�����*/

/*
using namespace std; 
void printBook(struct Books *book);

struct Books {
	char  title[50];   char  author[50];   char  subject[100];   int   book_id;
};

struct NewBook {//��ǰ�治ͬ���������string������title
	string title;   char  author[50];   char  subject[100];   int   book_id;
};


int main() {
	Books Book1;        // ����ṹ������ Books �ı��� Book1
	Books Book2;        // ����ṹ������ Books �ı��� Book2
	NewBook Book3;
						// Book1 ����   strcpy
	strcpy(Book1.title, "C++ �̳�");   strcpy(Book1.author, "Runoob");
	strcpy(Book1.subject, "�������");   Book1.book_id = 12345;
	// Book2 ����
	strcpy(Book2.title, "CSS �̳�");   strcpy(Book2.author, "Runoob");
	strcpy(Book2.subject, "ǰ�˼���");   Book2.book_id = 12346;

	Book3.title = "2001 A Space Odyssey";
	//Book3.author = "Someone";//����ǲ����е�, ��Ϊchar author[50]�ǲ����޸ĵ�����


	// ͨ���� Book1 �ĵ�ַ����� Book1 ��Ϣ
	printBook(&Book1);
	// ͨ���� Book2 �ĵ�ַ����� Book2 ��Ϣ
	printBook(&Book2);
	return 0;
}

// �ú����Խṹָ����Ϊ����
void printBook(struct Books *book) {
	cout << "�����  : " << book->title << endl;   
	cout << "������ : "<< book->author << endl;  
	cout << "����Ŀ : " << book->subject << endl;
	cout << "�� ID : " << book->book_id << endl;
}
*/