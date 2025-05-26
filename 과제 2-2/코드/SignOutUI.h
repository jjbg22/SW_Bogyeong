#pragma once
#include <string>
#include <fstream>
using namespace std;

// 로그아웃 boundary 클래스
class SignOutUI {
private:
	ofstream& out_fp;			// 시스템 출력 파일

public:
	SignOutUI(ofstream& out_fp);
	void CompleteSignOut(string user_id);
}; 
