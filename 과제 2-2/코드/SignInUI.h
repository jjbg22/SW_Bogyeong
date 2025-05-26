#pragma once
#include <string>
#include <fstream>
#include "SignIn.h"
using namespace std;

// 로그인 boundary 클래스
class SignInUI {
private:
	SignIn* signIn;			// 로그인 control 클래스 레퍼런스
	string user_id;			// 사용자 ID
	string user_password;	// 사용자 비밀번호
	ifstream& in_fp;		// 사용자 입력 파일
	ofstream& out_fp;		// 시스템 출력 파일

public:
	SignInUI(SignIn* signIn, ifstream& in_fp, ofstream& out_fp);
	void CompleteSignIn();
};
