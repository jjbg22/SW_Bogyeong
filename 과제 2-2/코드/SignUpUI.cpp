#include <iostream>
#include "SignUpUI.h"
using namespace std;

/*
	�Լ� �̸� : SignUpUI::SignUpUI
	���	  : SignUpUI ������
	���� ���� : SignUp* signUp : ȸ������ control Ŭ���� ���۷���
				ifstream& in_fp     : ����� �Է� ����
				ofstream& out_fp    : �ý��� ��� ����
	��ȯ��    : ����
*/
SignUpUI::SignUpUI(SignUp* signUp, ifstream& in_fp, ofstream& out_fp)
	: signUp(signUp), in_fp(in_fp), out_fp(out_fp) {}


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