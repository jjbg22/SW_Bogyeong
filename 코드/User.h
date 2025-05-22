#pragma once
#include <string>
using namespace std;

// 현재 로그인한 사용자의 정보를 담는 User 클래스 정의
class User {
private:
	string user_id;			// 사용자 ID
	string user_password;	// 사용자 비밀번호
	string status;			// 사용자 권한(회원 or 관리자)

public:
	string get_status(void);
	string get_user_id();
	void set_user_id(string user_id);
	void set_user_password(string user_password);
	void set_status(string status);
};

