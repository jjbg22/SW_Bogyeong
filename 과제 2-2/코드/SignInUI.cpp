#include <iostream>
#include "SignInUI.h"
using namespace std;

/*
	�Լ� �̸� : SignInUI::SignInUI
	���	  : SignInUI ������
	���� ���� : SignIn* signIn : �α��� control Ŭ���� ���۷���
				ifstream& in_fp     : ����� �Է� ����
                ofstream& out_fp    : �ý��� ��� ����
	��ȯ��    : ����
*/
SignInUI::SignInUI(SignIn* signIn, ifstream& in_fp, ofstream& out_fp)
	: signIn(signIn), in_fp(in_fp), out_fp(out_fp) {}


/*
	�Լ� �̸� : SignUpUI::CompleteSignUp
	���	  : ȸ���� �Է��� ������ ID, ��й�ȣ�� control Ŭ������ �����ϰ�, "2.1. �α���" �޴���� {ID, ��й�ȣ}�� ���
	���� ���� : ����
	��ȯ��    : ����
*/
void SignInUI::CompleteSignIn() {
	in_fp >> user_id >> user_password;

	signIn->CheckSignIn(user_id, user_password);

	out_fp << "2.1. �α���" << endl;
	out_fp << "> " << user_id << " " << user_password << endl;
	out_fp << endl;
}