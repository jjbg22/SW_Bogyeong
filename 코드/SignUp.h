#pragma once
#include <string>
#include "Membership.h"
using namespace std;

class SignUp {
private:
	Membership* membership;	// Membership Ŭ���� ��ü ���۷���

public:
	SignUp() {}
	SignUp(Membership* membership);
	void AddNewMember(string client_id, string client_password, int client_phone_num);
};