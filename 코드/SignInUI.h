#pragma once
#include <string>
#include <fstream>
#include "SignIn.h"
using namespace std;

// 변수 선언
extern ofstream out_fp;
extern ifstream in_fp;

// 로그인 boundary 클래스
class SignInUI {
	SignIn* signIn;			// 로그인 control 클래스 레퍼런스
	string user_id;			// 사용자 ID
	string user_password;	// 사용자 비밀번호
public:
	SignInUI() {}
	SignInUI(SignIn* signIn);
	void CompleteSignIn();
};
