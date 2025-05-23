#include <iostream>
#include <vector>
#include "RentalInfo.h"
using namespace std;

/*
	함수 이름 : RentalInfo::RentalInfo
	기능	  : RentalInfo 생성자
	전달 인자 : Membership* membership : Membership 클래스 객체 레퍼런스
				User* user : User 클래스 객체 레퍼런스
	반환값    : 없음
*/
RentalInfo::RentalInfo(Membership* membership, User* user)
	: membership(membership), user(user) {}


/*
	함수 이름 : RentalInfo::set_rentalInfoUI
	기능	  : rentalInfoUI 초기화
	전달 인자 : RentalInfoUI* rentalInfoUI : 자전거 대여 리스트 boundary 클래스 레퍼런스
	반환값    : 없음
*/
void RentalInfo::set_rentalInfoUI(RentalInfoUI* rentalInfoUI) {
	this->rentalInfoUI = rentalInfoUI;
}


/*
	함수 이름 : RentalInfo::ShowRentalInfo
	기능	  : 사용자의 권한을 확인하고 회원일 시, 사용자의 ID로 회원 계정을 찾아 대여한 자전거 {자전거 ID, 자전거 제품명} 정보 리스트를 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void RentalInfo::ShowRentalInfo() {
	string user_id;

	if (user->get_status() == "client") {
		user_id = user->get_user_id();
		client = membership->FindClientUser(user_id);
		const vector<BikeInfo>& cashedList = client->ListRentedBike();
		rentalInfoUI->ShowRentedBike(cashedList);
	}
}