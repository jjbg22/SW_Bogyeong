#pragma once
#include <string>
#include <fstream>
#include "SignIn.h"
using namespace std;

// ���� ����
extern ofstream out_fp;
extern ifstream in_fp;

// �α��� boundary Ŭ����
class SignInUI {
	SignIn* signIn;			// �α��� control Ŭ���� ���۷���
	string user_id;			// ����� ID
	string user_password;	// ����� ��й�ȣ
public:
	SignInUI() {}
	SignInUI(SignIn* signIn);
	void CompleteSignIn();
};
