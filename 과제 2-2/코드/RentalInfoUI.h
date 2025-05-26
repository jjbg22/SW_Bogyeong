#pragma once
#include <string>
#include <fstream>
#include <vector>
#include "Bike.h"
using namespace std;

// ������ �뿩 ����Ʈ boundary Ŭ����
class RentalInfoUI {
private:
	ofstream& out_fp;			// �ý��� ��� ����

public:
	RentalInfoUI(ofstream& out_fp);
	void ShowRentedBike(const vector<BikeInfo>& cachedList);
};
