#pragma once
#include <string>
#include <fstream>
#include "SignIn.h"
using namespace std;

// �α��� boundary Ŭ����
class SignInUI {
private:
	SignIn* signIn;			// �α��� control Ŭ���� ���۷���
	string user_id;			// ����� ID
	string user_password;	// ����� ��й�ȣ
	ifstream& in_fp;		// ����� �Է� ����
	ofstream& out_fp;		// �ý��� ��� ����

public:
	SignInUI(SignIn* signIn, ifstream& in_fp, ofstream& out_fp);
	void CompleteSignIn();
};
