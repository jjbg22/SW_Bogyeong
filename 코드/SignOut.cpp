#include <iostream>
#include "SignOut.h"
using namespace std;

/*
	�Լ� �̸� : SignOut::SignOut
	���	  : SignOut ������
	���� ���� : User* user : User Ŭ���� ��ü ���۷���
	��ȯ��    : ����
*/
SignOut::SignOut(User* user)
	: user(user) {}


/*
	�Լ� �̸� : SignOut::set_signOutUI
	���	  : signOutUI �ʱ�ȭ
	���� ���� : SignOutUI* signOutUI : �α׾ƿ� boundary Ŭ���� ���۷���
	��ȯ��    : ����
*/
void SignOut::set_signOutUI(SignOutUI* signOutUI) {
	this->signOutUI = signOutUI;
}


/*
	�Լ� �̸� : SignOut::ExcuteSignOut
	���	  : �α׾ƿ� -> user�� ID�� ��ȯ �ް�, user�� ID, ��й�ȣ, status�� ��� ""�� �ʱ�ȭ
	���� ���� : ����
	��ȯ��    : ����
*/
void SignOut::ExcuteSignOut() {
	string user_id;
	user_id = user->get_user_id();
	user->set_user_id("");
	user->set_user_password("");
	user->set_status("");
	signOutUI->CompleteSignOut(user_id);
}