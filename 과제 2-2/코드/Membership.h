#pragma once
#include <string>
#include "Administrator.h"
#include "ClientCollection.h"
using namespace std;

// ��ϵ� �����(ȸ��, ������)�� �����ϴ� Membership Ŭ���� ����
class Membership {
private:
	Administrator* registeredAdmin;		// Adiministrator Ŭ���� ��ü ���۷���
	ClientCollection clientCollection;	// clientCollection Ŭ���� ��ü

public:
	Membership() {}
	Membership(Administrator* registeredAdmin);
	void AddNewClient(string client_id, string client_password, string client_phone_num);
	string CheckValidMember(string user_id, string user_password);
	Client* FindClientUser(string user_id);
	void DeleteAllMember();
};