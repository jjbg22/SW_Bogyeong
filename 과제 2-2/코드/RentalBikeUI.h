#pragma once
#include <string>
#include <fstream>
#include "RentalBike.h"
using namespace std;

// ���� ����
extern ofstream out_fp;
extern ifstream in_fp;

// ������ �뿩 boundary Ŭ����
class RentalBikeUI {
private:
	RentalBike* rentalBike;		// ������ �뿩 control Ŭ���� ���۷���
	string bike_id;				// ������ ID
	string bike_name;			// ������ ��ǰ��
	ifstream& in_fp;			// ����� �Է� ����
	ofstream& out_fp;			// �ý��� ��� ����

public:
	RentalBikeUI(RentalBike* rentalBike, ifstream& in_fp, ofstream& out_fp);
	void RequestRental();
};