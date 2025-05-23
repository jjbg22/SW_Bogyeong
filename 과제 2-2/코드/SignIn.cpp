#include <iostream>
#include "SignIn.h"
using namespace std;

/*
	�Լ� �̸� : SignIn::SignIn
	���	  : SignIn ������
	���� ���� : Membership* membership : Membership Ŭ���� ��ü ���۷���
				User* user : User Ŭ���� ��ü ���۷���
	��ȯ��    : ����
*/
SignIn::SignIn(Membership* membership, User* user)
	: membership(membership), user(user) {}


/*
	�Լ� �̸� : SignIn::CheckSignIn
	���	  : ���� ������ ȸ���� ȸ�� ��Ͽ� �߰�
	���� ���� : string client_id : ȸ�� ID
				string client_password : ȸ�� ��й�ȣ
				string client_phone_num : ȸ�� ��ȭ��ȣ
	��ȯ��    : ����
*/
void SignIn::CheckSignIn(string user_id, string user_password) {
	string status;
	status = membership->CheckValidMember(user_id, user_password);
	user->set_user_id(user_id);
	user->set_user_password(user_password);
	user->set_status(status);
}