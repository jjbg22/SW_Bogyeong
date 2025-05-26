#include <iostream>
#include "SignOutUI.h"
using namespace std;

/*
	�Լ� �̸� : SignOutUI::SignOutUI
	���	  : SignOutUI ������
	���� ���� : ofstream& out_fp    : �ý��� ��� ����
	��ȯ��    : ����
*/
SignOutUI::SignOutUI(ofstream& out_fp)
	: out_fp(out_fp) {}


/*
	�Լ� �̸� : SignOutUI::CompleteSignOut
	���	  : "2.2. �α׾ƿ�" �޴���� ȸ�� ID ���
	���� ���� : string user_id : ȸ�� ID
	��ȯ��    : ����
*/
void SignOutUI::CompleteSignOut(string user_id) {

	out_fp << "2.2. �α׾ƿ�" << endl;
	out_fp << "> " << user_id << endl;
	out_fp << endl;

}