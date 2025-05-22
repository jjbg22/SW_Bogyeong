#include <iostream>
#include "SignOutUI.h"
using namespace std;

// 변수 선언
extern ofstream out_fp;
extern ifstream in_fp;

/*
	함수 이름 : SignOutUI::CompleteSignOut
	기능	  : "2.2. 로그아웃" 메뉴명과 회원 ID 출력
	전달 인자 : string user_id : 회원 ID
	반환값    : 없음
*/
void SignOutUI::CompleteSignOut(string user_id) {
	out_fp << "2.2. 로그아웃" << endl;
	out_fp << "> " << user_id << endl;
}