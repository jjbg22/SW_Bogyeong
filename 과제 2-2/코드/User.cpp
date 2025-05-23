#include <iostream>
#include "User.h"

/*
	�Լ� �̸� : User::get_status
	���	  : status�� ��ȯ
	���� ���� : ����
	��ȯ��    : status -> ����� ����
*/
string User::get_status() {
	return status;
}


/*
	�Լ� �̸� : User::get_user_id
	���	  : user_id�� ��ȯ
	���� ���� : ����
	��ȯ��    : user_id -> ����� ID
*/
string User::get_user_id() {
	return user_id;
}


/*
	�Լ� �̸� : User::set_user_id
	���	  : user_id �ʱ�ȭ
	���� ���� : string user_id : ����� ID
	��ȯ��    : ����
*/
void User::set_user_id(string user_id) {
	this->user_id = user_id;
}


/*
	�Լ� �̸� : User::set_user_password
	���	  : user_password �ʱ�ȭ
	���� ���� : string user_password : ����� ��й�ȣ
	��ȯ��    : ����
*/
void User::set_user_password(string user_password) {
	this->user_password = user_password;
}


/*
	�Լ� �̸� : User::set_status
	���	  : status �ʱ�ȭ
	���� ���� : string status : ����� ����
	��ȯ��    : ����
*/
void User::set_status(string status) {
	this->status = status;
}
