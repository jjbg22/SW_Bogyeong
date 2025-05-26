#pragma once
#include <string>
#include <fstream>
#include "SignUp.h"
using namespace std;

// ȸ������ boundary Ŭ����
class SignUpUI {
private:
	SignUp* signUp;				// ȸ������ control Ŭ���� ���۷���
	string client_id;			// ȸ�� ID
	string client_password;		// ȸ�� ��й�ȣ
	string client_phone_num;	// ȸ�� ��ȭ��ȣ
	ifstream& in_fp;			// ����� �Է� ����
	ofstream& out_fp;			// �ý��� ��� ����

public:
	SignUpUI(SignUp* signUp, ifstream& in_fp, ofstream& out_fp);
	void CompleteSignUp();
};
