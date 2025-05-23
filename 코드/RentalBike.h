#pragma once
#include <string>
#include "RentalStation.h"
#include "Bike.h"
#include "Membership.h"
#include "Client.h"
#include "User.h"
using namespace std;

// 자전거 대여 control 클래스
class RentalBike {
private:
	RentalStation* rentalStation;	// RentalStation 클래스 객체 레퍼런스
	Bike* bike;						// Bike 클래스 객체 레퍼런스
	Membership* membership;			// Membership 클래스 객체 레퍼런스
	Client* client;					// Client 클래스 객체 레퍼런스
	User* user;						// User 클래스 객체 레퍼런스

public:
	RentalBike() {}
	RentalBike(RentalStation* rentalStation, Membership* membership, User* user);
	BikeInfo RequestRental(string bike_id);
};