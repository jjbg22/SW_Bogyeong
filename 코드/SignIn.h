#pragma once
#include <string>
#include "Membership.h"
#include "User.h"
using namespace std;

class SignIn {
private:
	Membership* membership;	// Membership Ŭ���� ��ü ���۷���
	User* user;				// User Ŭ���� ��ü ���۷���
public:
	SignIn() {}
	SignIn(Membership* membership, User* user);
	void CheckSignIn(string user_id, string user_password);
};