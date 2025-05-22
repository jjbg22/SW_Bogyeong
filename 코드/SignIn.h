#pragma once
#include <string>
#include "Membership.h"
#include "User.h"
using namespace std;

class SignIn {
private:
	Membership* membership;	// Membership 클래스 객체 레퍼런스
	User* user;				// User 클래스 객체 레퍼런스
public:
	SignIn() {}
	SignIn(Membership* membership, User* user);
	void CheckSignIn(string user_id, string user_password);
};