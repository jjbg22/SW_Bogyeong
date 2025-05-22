#include <iostream>
#include "Membership.h"
using namespace std;

/*
	�Լ� �̸� : Membership::AddNewClient
	���	  : clientCollection.AddClient()�� ȣ���� ���� ������ ȸ���� �߰�
	���� ���� : string client_id : ȸ�� ID
				string client_password : ȸ�� ��й�ȣ
				string client_phone_num : ȸ�� ��ȭ��ȣ
	��ȯ��    : ����
*/
void Membership::AddNewClient(string client_id, string client_password, int client_phone_num) {
	clientCollection.AddClient(client_id, client_password, client_phone_num);
}


/*
	�Լ� �̸� : Membership::CheckValidMember
	���	  : ����ڰ� ��ϵ� �����ڳ� ȸ���� ��ġ�ϴ��� Ȯ��
	���� ���� : string user_id : ����� ID
				string user_password : ����� ��й�ȣ
	��ȯ��    : string -> �����ڿ� ��ġ: "admin", ȸ���� ��ġ: "client", ��ȸ��: "nonMember"
*/
string Membership::CheckValidMember(string user_id, string user_password) {
	if (registeredAdmin->CheckAdminID(user_id, user_password) == true)
		return "admin";
	else if (clientCollection.FindClient(user_id, user_password) == true)
		return "client";
	else
		return "nonMember";
}


/*
	�Լ� �̸� : Membership::FindClientUser
	���	  : clientCollection.GetClient(user_id)�� ȣ���� ����� ID�� ��ġ�ϴ� ȸ�� ������ ��ȯ
	���� ���� : string user_id : ����� ID
	��ȯ��    : Client* : �˻��� ȸ���� ������
*/
Client* Membership::FindClientUser(string user_id) {
	return clientCollection.GetClient(user_id);
}


/*
	�Լ� �̸� : Membership::DeleteAllMember
	���	  : clientCollection.DeleteAllClient()�� ȣ���� ��ϵ� ��� ȸ�� ��ü ����, �̾ ������ ��ü�� ����
	���� ���� : ����
	��ȯ��    : ����
*/
void Membership::DeleteAllMember() {
	clientCollection.DeleteAllClient();
	delete registeredAdmin;
}