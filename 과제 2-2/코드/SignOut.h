#pragma once
#include <string>
#include "SignOutUI.h"
#include "User.h"
using namespace std;

// 로그아웃 control 클래스
class SignOut {
private:
	SignOutUI* signOutUI;	// 로그아웃 boundary 클래스 레퍼런스
	User* user;				// User 클래스 객체 레퍼런스

public:
	SignOut() {}
	SignOut(User* user);
	void set_signOutUI(SignOutUI* signOutUI);
	void ExecuteSignOut();
};