#include <iostream>
#include "SignOut.h"
using namespace std;

/*
	함수 이름 : SignOut::SignOut
	기능	  : SignOut 생성자
	전달 인자 : User* user : User 클래스 객체 레퍼런스
	반환값    : 없음
*/
SignOut::SignOut(User* user)
	: user(user) {}


/*
	함수 이름 : SignOut::set_signOutUI
	기능	  : signOutUI 초기화
	전달 인자 : SignOutUI* signOutUI : 로그아웃 boundary 클래스 레퍼런스
	반환값    : 없음
*/
void SignOut::set_signOutUI(SignOutUI* signOutUI) {
	this->signOutUI = signOutUI;
}


/*
	함수 이름 : SignOut::ExcuteSignOut
	기능	  : 로그아웃 -> user의 ID를 반환 받고, user의 ID, 비밀번호, status를 모두 ""로 초기화
	전달 인자 : 없음
	반환값    : 없음
*/
void SignOut::ExcuteSignOut() {
	string user_id;
	user_id = user->get_user_id();
	user->set_user_id("");
	user->set_user_password("");
	user->set_status("");
	signOutUI->CompleteSignOut(user_id);
}