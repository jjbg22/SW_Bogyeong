#include <iostream>
#include "RentalBike.h"
using namespace std;

/*
	�Լ� �̸� : RentalBike::RentalBike
	���	  : RentalBike ������
	���� ���� : RentalStation* rentalStation : RentalStation Ŭ���� ��ü ���۷���
				Membership* membership : Membership Ŭ���� ��ü ���۷���
				User* user : User Ŭ���� ��ü ���۷���
	��ȯ��    : ����
*/
RentalBike::RentalBike(RentalStation* rentalStation, Membership* membership, User* user)
	: rentalStation(rentalStation), membership(membership), user(user) {}


/*
	�Լ� �̸� : RentalBike::RequestRental
	���	  : ������� ������ Ȯ���ϰ� ȸ���� ��, �Է��� ������ ID�� ���� �����Ÿ� ã�� ������� ������ �뿩 ��Ͽ� ���
	���� ���� : string bike_id : ������ ID
	��ȯ��    : BikeInfo -> {������ ID, ������ ��ǰ��} 
*/
BikeInfo RentalBike::RequestRental(string bike_id) {
	BikeInfo bike_info = {"", ""};
	string user_id;
	Client* client;

	if (user->get_status() == "client") {
		bike = rentalStation->FindBike(bike_id);
		bike_info = bike->GetBikeIDName();
		user_id = user->get_user_id();
		client = membership->FindClientUser(user_id);
		client->AddRentedBike(bike);
	}

	return bike_info;
}