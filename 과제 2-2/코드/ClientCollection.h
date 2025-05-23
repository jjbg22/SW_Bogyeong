#pragma once
#include <iostream>
#include <vector>
#include "Client.h"
using namespace std;

// 등록된 회원 리스트를 관리하는 ClientCollection 클래스 정의 
class ClientCollection {
private:
	vector<Client*> registeredClient;	// 등록된 회원 참조 리스트

public:
	void AddClient(string client_id, string client_password, string client_phone_num);
	bool FindClient(string user_id, string user_password);
	Client* GetClient(string user_id);
	void DeleteAllClient();
};