#pragma once
#include <string>
#include <fstream>
#include "AddNewBike.h"
using namespace std;

// ���� ����
extern ofstream out_fp;
extern ifstream in_fp;

class AddNewBikeUI {
private:
	AddNewBike* addNewBike;		// ������ ��� control Ŭ���� ���۷���
	string bike_id;				// ������ ID
	string bike_name;			// ������ ��ǰ��

public:
	AddNewBikeUI() {}
	AddNewBikeUI(AddNewBike* addNewBike);
	void RegisterNewBike();
};