#include <iostream>
#include "SignUpUI.h"
using namespace std;

/*
	�Լ� �̸� : SignUpUI::SignUpUI
	���	  : SignUpUI ������
	���� ���� : SignUp* signUp : ȸ������ control Ŭ���� ���۷���
	��ȯ��    : ����
*/
SignUpUI::SignUpUI(SignUp* signUp)
	: signUp(signUp) {}


/*
	�Լ� �̸� : SignUpUI::CompleteSignUp
	���	  : ȸ���� �Է��� ������ ID, ��й�ȣ, ��ȭ��ȣ�� control Ŭ������ �����ϰ�, "1.1. ȸ������" �޴���� {ID, ��й�ȣ, ��ȭ��ȣ}�� ���
	���� ���� : ����
	��ȯ��    : ����
*/
void SignUpUI::CompleteSignUp(){
	in_fp >> client_id >> client_password >> client_phone_num;

	signUp->AddNewMember(client_id, client_password, client_phone_num);

	out_fp << "1.1. ȸ������" << endl;
	out_fp << "> " << client_id << " " << client_password << " " << client_phone_num << endl;
	out_fp << endl;
}