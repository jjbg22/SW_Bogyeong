#pragma once
#include <string>
#include <fstream>
#include "RentalBike.h"
using namespace std;

// 변수 선언
extern ofstream out_fp;
extern ifstream in_fp;

// 자전거 대여 boundary 클래스
class RentalBikeUI {
private:
	RentalBike* rentalBike;		// 자전거 대여 control 클래스 레퍼런스
	string bike_id;				// 자전거 ID
	string bike_name;			// 자전거 제품명

public:
	RentalBikeUI() {}
	RentalBikeUI(RentalBike* rentalBike);
	void RequestRental();
};