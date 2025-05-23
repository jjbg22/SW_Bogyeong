#pragma once
#include <string>
#include <fstream>
#include <vector>
#include "Bike.h"
using namespace std;

class RentalInfoUI {
public:
	void ShowRentedBike(const vector<BikeInfo>& cachedList);
};
