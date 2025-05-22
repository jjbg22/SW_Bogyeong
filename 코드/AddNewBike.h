#pragma once
#include <string>
#include "RentalStation.h"
#include "User.h"
using namespace std;

class AddNewBike {
private:
	RentalStation* rentalStation;	// RentalStation Ŭ���� ��ü ���۷���
	User* user;						// User Ŭ���� ��ü ���۷���

public:
	AddNewBike() {};
	AddNewBike(RentalStation* rentalStation, User* user);
	void RegisterNewBike(string bike_id, string bike_name);
};