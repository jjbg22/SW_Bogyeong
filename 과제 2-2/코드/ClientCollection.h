#pragma once
#include <iostream>
#include <vector>
#include "Client.h"
using namespace std;

// ��ϵ� ȸ�� ����Ʈ�� �����ϴ� ClientCollection Ŭ���� ���� 
class ClientCollection {
private:
	vector<Client*> registeredClient;	// ��ϵ� ȸ�� ���� ����Ʈ

public:
	void AddClient(string client_id, string client_password, string client_phone_num);
	bool FindClient(string user_id, string user_password);
	Client* GetClient(string user_id);
	void DeleteAllClient();
};