#include <iostream>
#include "Membership.h"
using namespace std;

/*
	함수 이름 : Membership::AddNewClient
	기능	  : clientCollection.AddClient()를 호출해 새로 가입한 회원을 추가
	전달 인자 : string client_id : 회원 ID
				string client_password : 회원 비밀번호
				string client_phone_num : 회원 전화번호
	반환값    : 없음
*/
void Membership::AddNewClient(string client_id, string client_password, int client_phone_num) {
	clientCollection.AddClient(client_id, client_password, client_phone_num);
}


/*
	함수 이름 : Membership::CheckValidMember
	기능	  : 사용자가 등록된 관리자나 회원과 일치하는지 확인
	전달 인자 : string user_id : 사용자 ID
				string user_password : 사용자 비밀번호
	반환값    : string -> 관리자와 일치: "admin", 회원과 일치: "client", 비회원: "nonMember"
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
	함수 이름 : Membership::FindClientUser
	기능	  : clientCollection.GetClient(user_id)를 호출해 사용자 ID와 일치하는 회원 참조를 반환
	전달 인자 : string user_id : 사용자 ID
	반환값    : Client* : 검색한 회원의 포인터
*/
Client* Membership::FindClientUser(string user_id) {
	return clientCollection.GetClient(user_id);
}


/*
	함수 이름 : Membership::DeleteAllMember
	기능	  : clientCollection.DeleteAllClient()를 호출해 등록된 모든 회원 객체 삭제, 이어서 관리자 객체도 삭제
	전달 인자 : 없음
	반환값    : 없음
*/
void Membership::DeleteAllMember() {
	clientCollection.DeleteAllClient();
	delete registeredAdmin;
}