#include <iostream>
#include "SignOutUI.h"
using namespace std;

// ���� ����
extern ofstream out_fp;
extern ifstream in_fp;

/*
	�Լ� �̸� : SignOutUI::CompleteSignOut
	���	  : "2.2. �α׾ƿ�" �޴���� ȸ�� ID ���
	���� ���� : string user_id : ȸ�� ID
	��ȯ��    : ����
*/
void SignOutUI::CompleteSignOut(string user_id) {
	out_fp << "2.2. �α׾ƿ�" << endl;
	out_fp << "> " << user_id << endl;
}