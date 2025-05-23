#pragma once
#include <string>
#include <fstream>
#include "SignUp.h"
using namespace std;

// ���� ����
extern ofstream out_fp;
extern ifstream in_fp;

class SignUpUI {
private:
	SignUp* signUp;				// ȸ������ control Ŭ���� ���۷���
	string client_id;			// ȸ�� ID
	string client_password;		// ȸ�� ��й�ȣ
	string client_phone_num;	// ȸ�� ��ȭ��ȣ

public:
	SignUpUI() {}
	SignUpUI(SignUp* signUp);
	void CompleteSignUp();
};
