#include <iostream>
#include "AddNewBike.h"
using namespace std;

/*
	함수 이름 : AddNewBike::AddNewBike
	기능	  : AddNewBike 생성자
	전달 인자 : RentalStation* rentalStation : RentalStation 클래스 객체 레퍼런스
				User* user : User 클래스 객체 레퍼런스
	반환값    : 없음
*/
AddNewBike::AddNewBike(RentalStation* rentalStation, User* user)
	: rentalStation(rentalStation), user(user){}


/*
	함수 이름 : AddNewBike::RegisterNewBike
	기능	  : 사용자의 권한을 확인하고 관리자일 시, 입력한 자전거를 자전거 목록에 등록
	전달 인자 : string bike_id : 자전거 ID
				string bike_name : 자전거 이름
	반환값    : 없음
*/
void AddNewBike::RegisterNewBike(string bike_id, string bike_name) {
	if (user->get_status() == "admin")
		rentalStation->AddNewBike(bike_id, bike_name);
}