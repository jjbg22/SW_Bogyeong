#include <iostream>
#include "Administrator.h"

/*
	�Լ� �̸� : Administrator::Administrator
	���	  : Administrator ������
	���� ���� : string admin_id : ������ ID
				string admin_password : ������ ��й�ȣ
	��ȯ��    : ����
*/
Administrator::Administrator(string admin_id, string admin_password)
	: admin_id(admin_id), admin_password(admin_password) {}


/*
	�Լ� �̸� : Administrator::CheckAdminID
	���	  : ������� ID�� ��й�ȣ�� �������� ID�� ��й�ȣ�� ��ġ�ϴ��� Ȯ��
	���� ���� : string user_id : ����� ID
				string user_password : ����� ��й�ȣ
	��ȯ��    : bool -> ��ġ: true, ����ġ: false
*/
bool Administrator::CheckAdminID(string user_id, string user_password) {
	if (admin_id == user_id && admin_password == user_password)
		return true;
	else
		return false;
}