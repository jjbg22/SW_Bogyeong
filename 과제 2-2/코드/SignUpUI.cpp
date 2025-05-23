#include <iostream>
#include "SignUpUI.h"
using namespace std;

/*
	함수 이름 : SignUpUI::SignUpUI
	기능	  : SignUpUI 생성자
	전달 인자 : SignUp* signUp : 회원가입 control 클래스 레퍼런스
	반환값    : 없음
*/
SignUpUI::SignUpUI(SignUp* signUp)
	: signUp(signUp) {}


/*
	함수 이름 : SignUpUI::CompleteSignUp
	기능	  : 회원이 입력한 파일의 ID, 비밀번호, 전화번호를 control 클래스에 전달하고, "1.1. 회원가입" 메뉴명과 {ID, 비밀번호, 전화번호}를 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void SignUpUI::CompleteSignUp(){
	in_fp >> client_id >> client_password >> client_phone_num;

	signUp->AddNewMember(client_id, client_password, client_phone_num);

	out_fp << "1.1. 회원가입" << endl;
	out_fp << "> " << client_id << " " << client_password << " " << client_phone_num << endl;
	out_fp << endl;
}