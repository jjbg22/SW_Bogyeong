#include <iostream>
#include "SignUp.h"
using namespace std;

/*
	함수 이름 : SignUp::SignUp
	기능	  : SignUp 생성자
	전달 인자 : Membership* membership : Membership 클래스 객체 레퍼런스
	반환값    : 없음
*/
SignUp::SignUp(Membership* membership)
	: membership(membership) {}


/*
	함수 이름 : ClientCollection::AddClient
	기능	  : 새로 가입한 회원을 회원 목록에 추가
	전달 인자 : string client_id : 회원 ID
				string client_password : 회원 비밀번호
				string client_phone_num : 회원 전화번호
	반환값    : 없음
*/
void SignUp::AddNewMember(string client_id, string client_password, string client_phone_num) {
	membership->AddNewClient(client_id, client_password, client_phone_num);
}