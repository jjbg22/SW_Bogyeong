#pragma once
#include <string>
#include <fstream>
#include "AddNewBike.h"
using namespace std;

// ���� ����
extern ofstream out_fp;
extern ifstream in_fp;

// ������ ��� boundary Ŭ����
class AddNewBikeUI {
private:
	AddNewBike* addNewBike;		// ������ ��� control Ŭ���� ���۷���
	string bike_id;				// ������ ID
	string bike_name;			// ������ ��ǰ��
	ifstream& in_fp;			// ����� �Է� ����
	ofstream& out_fp;			// �ý��� ��� ����

public:
	AddNewBikeUI(AddNewBike* addNewBike, ifstream& in_fp, ofstream& out_fp);
	void RegisterNewBike();
};