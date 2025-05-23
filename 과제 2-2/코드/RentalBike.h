#pragma once
#include <string>
#include "RentalStation.h"
#include "Bike.h"
#include "Membership.h"
#include "Client.h"
#include "User.h"
using namespace std;

// ������ �뿩 control Ŭ����
class RentalBike {
private:
	RentalStation* rentalStation;	// RentalStation Ŭ���� ��ü ���۷���
	Bike* bike;						// Bike Ŭ���� ��ü ���۷���
	Membership* membership;			// Membership Ŭ���� ��ü ���۷���
	Client* client;					// Client Ŭ���� ��ü ���۷���
	User* user;						// User Ŭ���� ��ü ���۷���

public:
	RentalBike() {}
	RentalBike(RentalStation* rentalStation, Membership* membership, User* user);
	BikeInfo RequestRental(string bike_id);
};