#include <iostream>
#include "RentalBike.h"
using namespace std;

/*
	함수 이름 : RentalBike::RentalBike
	기능	  : RentalBike 생성자
	전달 인자 : RentalStation* rentalStation : RentalStation 클래스 객체 레퍼런스
				Membership* membership : Membership 클래스 객체 레퍼런스
				User* user : User 클래스 객체 레퍼런스
	반환값    : 없음
*/
RentalBike::RentalBike(RentalStation* rentalStation, Membership* membership, User* user)
	: rentalStation(rentalStation), membership(membership), user(user) {}


/*
	함수 이름 : RentalBike::RequestRental
	기능	  : 사용자의 권한을 확인하고 회원일 시, 입력한 자전거 ID를 가진 자전거를 찾아 사용자의 자전거 대여 목록에 등록
	전달 인자 : string bike_id : 자전거 ID
	반환값    : BikeInfo -> {자전거 ID, 자전거 제품명} 
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