#pragma once
#include <fstream>
using namespace std;

// ���α׷� ���� boundary Ŭ����
class CloseProgramUI {
private:
	ofstream& out_fp;			// �ý��� ��� ����

public:
	CloseProgramUI(ofstream& out_fp);
	void CompleteClose();
};
