#pragma once
#include <string>
#include <fstream>
using namespace std;

// �α׾ƿ� boundary Ŭ����
class SignOutUI {
private:
	ofstream& out_fp;			// �ý��� ��� ����

public:
	SignOutUI(ofstream& out_fp);
	void CompleteSignOut(string user_id);
}; 
