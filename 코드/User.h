#pragma once
#include <string>
using namespace std;

// ���� �α����� ������� ������ ��� User Ŭ���� ����
class User {
private:
	string user_id;			// ����� ID
	string user_password;	// ����� ��й�ȣ
	string status;			// ����� ����(ȸ�� or ������)

public:
	string get_status(void);
	string get_user_id();
	void set_user_id(string user_id);
	void set_user_password(string user_password);
	void set_status(string status);
};

