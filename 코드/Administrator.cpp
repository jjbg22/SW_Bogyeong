#include <iostream>
#include "Administrator.h"


/*
	함수 이름 : Administrator::CheckAdminID
	기능	  : 사용자의 ID와 비밀번호가 관리자의 ID와 비밀번호와 일치하는지 확인
	전달 인자 : string user_id : 사용자 ID
				string user_password : 사용자 비밀번호
	반환값    : bool -> 일치: true, 불일치: false
*/
bool Administrator::CheckAdminID(string user_id, string user_password) {
	if (admin_id == user_id && admin_password == user_password)
		return true;
	else
		return false;
}