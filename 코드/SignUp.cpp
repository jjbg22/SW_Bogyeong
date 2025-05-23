#include <iostream>
#include "SignUp.h"
using namespace std;

/*
	�Լ� �̸� : SignUp::SignUp
	���	  : SignUp ������
	���� ���� : Membership* membership : Membership Ŭ���� ��ü ���۷���
	��ȯ��    : ����
*/
SignUp::SignUp(Membership* membership)
	: membership(membership) {}


/*
	�Լ� �̸� : ClientCollection::AddClient
	���	  : ���� ������ ȸ���� ȸ�� ��Ͽ� �߰�
	���� ���� : string client_id : ȸ�� ID
				string client_password : ȸ�� ��й�ȣ
				string client_phone_num : ȸ�� ��ȭ��ȣ
	��ȯ��    : ����
*/
void SignUp::AddNewMember(string client_id, string client_password, string client_phone_num) {
	membership->AddNewClient(client_id, client_password, client_phone_num);
}