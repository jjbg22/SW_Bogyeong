#pragma once
#include <string>
#include "Membership.h"
using namespace std;

// ȸ������ control Ŭ����
class SignUp {
private:
	Membership* membership;	// Membership Ŭ���� ��ü ���۷���

public:
	SignUp() {}
	SignUp(Membership* membership);
	void AddNewMember(string client_id, string client_password, string client_phone_num);
};