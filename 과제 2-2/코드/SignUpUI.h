#pragma once
#include <string>
#include <fstream>
#include "SignUp.h"
using namespace std;

// 회원가입 boundary 클래스
class SignUpUI {
private:
	SignUp* signUp;				// 회원가입 control 클래스 레퍼런스
	string client_id;			// 회원 ID
	string client_password;		// 회원 비밀번호
	string client_phone_num;	// 회원 전화번호
	ifstream& in_fp;			// 사용자 입력 파일
	ofstream& out_fp;			// 시스템 출력 파일

public:
	SignUpUI(SignUp* signUp, ifstream& in_fp, ofstream& out_fp);
	void CompleteSignUp();
};
