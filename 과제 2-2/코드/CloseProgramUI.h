#pragma once
#include <fstream>
using namespace std;

// 프로그램 종료 boundary 클래스
class CloseProgramUI {
private:
	ofstream& out_fp;			// 시스템 출력 파일

public:
	CloseProgramUI(ofstream& out_fp);
	void CompleteClose();
};
