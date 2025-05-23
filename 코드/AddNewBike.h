#pragma once
#include <string>
#include "RentalStation.h"
#include "User.h"
using namespace std;

// 자전거 등록 control 클래스
class AddNewBike {
private:
	RentalStation* rentalStation;	// RentalStation 클래스 객체 레퍼런스
	User* user;						// User 클래스 객체 레퍼런스

public:
	AddNewBike() {};
	AddNewBike(RentalStation* rentalStation, User* user);
	void RegisterNewBike(string bike_id, string bike_name);
};