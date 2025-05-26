#pragma once
#include <string>
#include <fstream>
#include <vector>
#include "Bike.h"
using namespace std;

// 자전거 대여 리스트 boundary 클래스
class RentalInfoUI {
private:
	ofstream& out_fp;			// 시스템 출력 파일

public:
	RentalInfoUI(ofstream& out_fp);
	void ShowRentedBike(const vector<BikeInfo>& cachedList);
};
