#include <iostream>
#include "Administrator.h"


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