#pragma once
#include <string>
#include "ClientCollection.h"
using namespace std;

/*
	함수 이름 : ClientCollection::AddClient
	기능	  : 새로 가입한 회원을 회원 목록에 추가
	전달 인자 : string client_id : 회원 ID
				string client_password : 회원 비밀번호
				string client_phone_num : 회원 전화번호
	반환값    : 없음
*/
void ClientCollection::AddClient(string client_id, string client_password, string client_phone_num) {
	Client* newClient = new Client(client_id, client_password, client_phone_num);
	registeredClient.push_back(newClient);
}


/*
	함수 이름 : ClientCollection::FindClient
	기능	  : 사용자 ID, 사용자 비밀번호와 일치하는 회원이 있는지 확인
	전달 인자 : string user_id : 사용자 ID
				string user_password : 사용자 비밀번호
	반환값    : bool -> 일치하는 회원이 존재: true, 존재하지 않음: false
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
	함수 이름 : ClientCollection::GetClient
	기능	  : 사용자 ID와 일치하는 회원 참조를 반환
	전달 인자 : string user_id : 사용자 ID
	반환값    : Client* : 검색한 회원의 포인터
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
	함수 이름 : ClientCollection::DeleteAllClient
	기능	  : 등록된 회원 객체를 모두 삭제
	전달 인자 : 없음
	반환값    : 없음
*/
void ClientCollection::DeleteAllClient(){
	vector<Client*>::iterator it;

	for (it = registeredClient.begin(); it != registeredClient.end();) {
		delete *it;
		it = registeredClient.erase(it);
	}
}