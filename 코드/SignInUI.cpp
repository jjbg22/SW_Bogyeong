#include <iostream>
#include "SignInUI.h"
using namespace std;

/*
	�Լ� �̸� : SignInUI::SignInUI
	���	  : SignInUI ������
	���� ���� : SignIn* signIn : �α��� control Ŭ���� ���۷���
	��ȯ��    : ����
*/
SignInUI::SignInUI(SignIn* signIn)
	: signIn(signIn) {}


/*
	�Լ� �̸� : SignUpUI::CompleteSignUp
	���	  : ȸ���� �Է��� ������ ID, ��й�ȣ�� control Ŭ������ �����ϰ�, "2.1. �α���" �޴���� {ID, ��й�ȣ}�� ���
	���� ���� : ����
	��ȯ��    : ����
*/
void SignInUI::CompleteSignIn() {
	in_fp >> user_id >> user_password;

	signIn->CheckSignIn(user_id, user_password);

	out_fp << endl;
	out_fp << "2.1. �α���" << endl;
	out_fp << "> " << user_id << " " << user_password << endl;
}