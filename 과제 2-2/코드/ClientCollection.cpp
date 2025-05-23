#pragma once
#include <string>
#include "ClientCollection.h"
using namespace std;

/*
	�Լ� �̸� : ClientCollection::AddClient
	���	  : ���� ������ ȸ���� ȸ�� ��Ͽ� �߰�
	���� ���� : string client_id : ȸ�� ID
				string client_password : ȸ�� ��й�ȣ
				string client_phone_num : ȸ�� ��ȭ��ȣ
	��ȯ��    : ����
*/
void ClientCollection::AddClient(string client_id, string client_password, string client_phone_num) {
	Client* newClient = new Client(client_id, client_password, client_phone_num);
	registeredClient.push_back(newClient);
}


/*
	�Լ� �̸� : ClientCollection::FindClient
	���	  : ����� ID, ����� ��й�ȣ�� ��ġ�ϴ� ȸ���� �ִ��� Ȯ��
	���� ���� : string user_id : ����� ID
				string user_password : ����� ��й�ȣ
	��ȯ��    : bool -> ��ġ�ϴ� ȸ���� ����: true, �������� ����: false
*/
bool ClientCollection::FindClient(string user_id, string user_password) {
	vector<Client*>::iterator it;

	for (it = registeredClient.begin(); it != registeredClient.end(); it++)
		if ((*it)->get_client_id() == user_id) {
			if ((*it)->get_client_password() == user_password)
			{
				return true;
				break;
			}
		}
	return false;
}


/*
	�Լ� �̸� : ClientCollection::GetClient
	���	  : ����� ID�� ��ġ�ϴ� ȸ�� ������ ��ȯ
	���� ���� : string user_id : ����� ID
	��ȯ��    : Client* : �˻��� ȸ���� ������
*/
Client* ClientCollection::GetClient(string user_id) {
	vector<Client*>::iterator it;

	for (it = registeredClient.begin(); it != registeredClient.end(); it++)
		if ((*it)->get_client_id() == user_id) {
			return *it;
			break;
		}
}


/*
	�Լ� �̸� : ClientCollection::DeleteAllClient
	���	  : ��ϵ� ȸ�� ��ü�� ��� ����
	���� ���� : ����
	��ȯ��    : ����
*/
void ClientCollection::DeleteAllClient(){
	vector<Client*>::iterator it;

	for (it = registeredClient.begin(); it != registeredClient.end();) {
		delete *it;
		it = registeredClient.erase(it);
	}
}