#include <iostream>
#include "RentalBikeUI.h"
using namespace std;

/*
	함수 이름 : RentalBikeUI::RentalBikeUI
	기능	  : RentalBikeUI 생성자
	전달 인자 : RentalBike* rentalBike : 자전거 대여 control 클래스 레퍼런스
	반환값    : 없음
*/
RentalBikeUI::RentalBikeUI(RentalBike* rentalBike)
	: rentalBike(rentalBike) {}

/*
	함수 이름 : RentalBikeUI::RequestRental
	기능	  : 회원이 입력한 파일의 자전거 ID를 control 클래스에 전달하고, "4.1. 자전거 대여" 메뉴명과 대여한 자전거의 {자전거 ID, 자전거 제품명}를 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void RentalBikeUI::RequestRental() {
	BikeInfo bike_info;

	in_fp >> bike_id;

	bike_info = rentalBike->RequestRental(bike_id);

	out_fp << "4.1. 자전거 대여" << endl;
	out_fp << "> " << bike_info.bikeId << " " << bike_info.bikeName << endl;
	out_fp << endl;
}