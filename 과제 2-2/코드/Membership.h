#pragma once
#include <string>
#include "Administrator.h"
#include "ClientCollection.h"
using namespace std;

// 등록된 사용자(회원, 관리자)를 관리하는 Membership 클래스 정의
class Membership {
private:
	Administrator* registeredAdmin;
	ClientCollection clientCollection;

public:
	Membership() {}
	Membership(Administrator* registeredAdmin);
	void AddNewClient(string client_id, string client_password, string client_phone_num);
	string CheckValidMember(string user_id, string user_password);
	Client* FindClientUser(string user_id);
	void DeleteAllMember();
};