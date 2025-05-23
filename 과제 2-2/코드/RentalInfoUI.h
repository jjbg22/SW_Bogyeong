#pragma once
#include <string>
#include <fstream>
#include <vector>
#include "Bike.h"
using namespace std;

// 자전거 대여 리스트 boundary 클래스
class RentalInfoUI {

public:
	void ShowRentedBike(const vector<BikeInfo>& cachedList);
};
