#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Message.h"
#include "User.h"


class Chat
{
public:
	Chat();
	~Chat();
	std::string readInput(); //��������� ���� � ������� � ���������� ����� ���� String
	void userDataInput(User& user); //���� �����, ������ � ������ ������������4
	void logInInput(User& user); //���� ������ ������ � ������, ������������ ��� ����� � ������� 
	void regUser(bool* userExist); // ����������� ������ ������������
	void logInUser(bool* userExist);
	void logOutUser(bool* userExist);
	void isAvailable(User& user, bool& check); // ���������, ������ �� ����� � ������

	void setActiveUser(bool* userExist, int id, std::string name, std::string login); //������ ID, ��� � ����� ��������� ������������
	bool checkForActiveUser();
	std::string getActiveUserName();
	std::string getActiveUserLogin();
	void setResName(int id, std::string name);
	std::string getActiveResLogin(); //����� ����������
	int getActiveUserID();

	void showUserList(); //���������� ������ ������������������ �������������
	void addUserToList(User& user); //��������� ������ ������������ � ������
	size_t listSize();

	void privateChat();
	void generalChat();
	std::string getResipient(int idResipient); // ������������� ���������� ���������
	void receive_priv_Message();
	void recive_Message();

	std::vector<User> _userList; //������ �������������

private:


	std::vector<Message> _messageList; //������ ���������
	std::vector<Message> _messageList_priv; // ��������� ������ ���������
	std::string _activeUserLogin; //����� ������������, ������������� ��� � ������ ������ 
	std::string _activeUserName; //��� ��������� ������������
	std::string _activeResLogin; //����� ����������

	int userID = 0;
	int resID = 0;

};
