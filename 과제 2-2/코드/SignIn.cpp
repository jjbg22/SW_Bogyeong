#include <iostream>
#include "SignIn.h"
using namespace std;

/*
	함수 이름 : SignIn::SignIn
	기능	  : SignIn 생성자
	전달 인자 : Membership* membership : Membership 클래스 객체 레퍼런스
				User* user : User 클래스 객체 레퍼런스
	반환값    : 없음
*/
SignIn::SignIn(Membership* membership, User* user)
	: membership(membership), user(user) {}


/*
	함수 이름 : SignIn::CheckSignIn
	기능	  : 새로 가입한 회원을 회원 목록에 추가
	전달 인자 : string client_id : 회원 ID
				string client_password : 회원 비밀번호
				string client_phone_num : 회원 전화번호
	반환값    : 없음
*/
void SignIn::CheckSignIn(string user_id, string user_password) {
	string status;
	status = membership->CheckValidMember(user_id, user_password);
	user->set_user_id(user_id);
	user->set_user_password(user_password);
	user->set_status(status);
}