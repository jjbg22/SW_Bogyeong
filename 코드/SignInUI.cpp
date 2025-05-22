#include <iostream>
#include "SignInUI.h"
using namespace std;

/*
	함수 이름 : SignInUI::SignInUI
	기능	  : SignInUI 생성자
	전달 인자 : SignIn* signIn : 로그인 control 클래스 레퍼런스
	반환값    : 없음
*/
SignInUI::SignInUI(SignIn* signIn)
	: signIn(signIn) {}


/*
	함수 이름 : SignUpUI::CompleteSignUp
	기능	  : 회원이 입력한 파일의 ID, 비밀번호를 control 클래스에 전달하고, "2.1. 로그인" 메뉴명과 {ID, 비밀번호}를 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void SignInUI::CompleteSignIn() {
	in_fp >> user_id >> user_password;

	signIn->CheckSignIn(user_id, user_password);

	out_fp << endl;
	out_fp << "2.1. 로그인" << endl;
	out_fp << "> " << user_id << " " << user_password << endl;
}