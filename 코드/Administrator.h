#pragma once
#include <string>
using namespace std;

// �������� ������ ��� Adiministrator Ŭ���� ����
class Administrator {
private:
	string admin_id;		// ������ ID
	string admin_password;	// ������ ��й�ȣ

public:
	Administrator() {}
	Administrator(string admin_id, string admin_password);
	bool CheckAdminID(string user_id, string user_password);
};