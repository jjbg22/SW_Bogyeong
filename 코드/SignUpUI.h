#pragma once
#include <string>
#include <fstream>
#include "SignUp.h"
using namespace std;

// 변수 선언
extern ofstream out_fp;
extern ifstream in_fp;

class SignUpUI {
private:
	SignUp* signUp;				// 회원가입 control 클래스 레퍼런스
	string client_id;			// 회원 ID
	string client_password;		// 회원 비밀번호
	string client_phone_num;	// 회원 전화번호

public:
	SignUpUI() {}
	SignUpUI(SignUp* signUp);
	void CompleteSignUp();
};
