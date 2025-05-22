#pragma once
#include <string>
#include "RentalStation.h"
#include "Bike.h"
#include "Membership.h"
#include "Client.h"
#include "User.h"
using namespace std;

class RentalBike {
private:
	RentalStation* rentalStation;	// RentalStation 클래스 객체 레퍼런스
	Bike* bike;						// Bike 클래스 객체 레퍼런스
	Membership* membership;			// Membership 클래스 객체 레퍼런스
	Client* client;					// Client 클래스 객체 레퍼런스
	User* user;						// User 클래스 객체 레퍼런스

public:
	RentalBike() {}
	RentalBike(RentalStation* rentalStation, Bike* bike, Membership* membership, Client* client, User* user);
	BikeInfo RequestRental(string bike_id);
};