#pragma once
#include <string>
#include "Membership.h"
using namespace std;

class SignUp {
private:
	Membership* membership;	// Membership 클래스 객체 레퍼런스

public:
	SignUp() {}
	SignUp(Membership* membership);
	void AddNewMember(string client_id, string client_password, int client_phone_num);
};