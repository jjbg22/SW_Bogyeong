#pragma once
#include <string>
using namespace std;

// �������� ������ ��� Adiministrator Ŭ���� ����
class Administrator {
private:
	string admin_id;		// ������ ID
	string admin_password;	// ������ ��й�ȣ

public:
	bool CheckAdminID(string user_id, string user_password);
};