#pragma once
#include <string>
#include "SignOutUI.h"
#include "User.h"
using namespace std;

class SignOut {
private:
	SignOutUI* signOutUI;	// �α׾ƿ� boundary Ŭ���� ���۷���
	User* user;				// User Ŭ���� ��ü ���۷���

public:
	SignOut() {}
	SignOut(User* user);
	void set_signOutUI(SignOutUI* signOutUI);
	void ExecuteSignOut();
};