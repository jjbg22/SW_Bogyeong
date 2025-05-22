#include <iostream>
#include "User.h"

/*
	함수 이름 : User::get_status
	기능	  : status를 반환
	전달 인자 : 없음
	반환값    : status -> 사용자 권한
*/
string User::get_status() {
	return status;
}


/*
	함수 이름 : User::get_user_id
	기능	  : user_id를 반환
	전달 인자 : 없음
	반환값    : user_id -> 사용자 ID
*/
string User::get_user_id() {
	return user_id;
}


/*
	함수 이름 : User::set_user_id
	기능	  : user_id 초기화
	전달 인자 : string user_id : 사용자 ID
	반환값    : 없음
*/
void User::set_user_id(string user_id) {
	this->user_id = user_id;
}


/*
	함수 이름 : User::set_user_password
	기능	  : user_password 초기화
	전달 인자 : string user_password : 사용자 비밀번호
	반환값    : 없음
*/
void User::set_user_password(string user_password) {
	this->user_password = user_password;
}


/*
	함수 이름 : User::set_status
	기능	  : status 초기화
	전달 인자 : string status : 사용자 권한
	반환값    : 없음
*/
void User::set_status(string status) {
	this->status = status;
}
