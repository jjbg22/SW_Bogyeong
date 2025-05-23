#pragma once
#include <string>
using namespace std;

// 관리자의 정보를 담는 Adiministrator 클래스 정의
class Administrator {
private:
	string admin_id;		// 관리자 ID
	string admin_password;	// 관리자 비밀번호

public:
	Administrator() {}
	Administrator(string admin_id, string admin_password);
	bool CheckAdminID(string user_id, string user_password);
};