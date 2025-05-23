#include <iostream>
#include "RentalInfoUI.h"
using namespace std;

// 변수 선언
extern ofstream out_fp;
extern ifstream in_fp;

/*
	함수 이름 : RentalInfoUI::ShowRentedBike
	기능	  : "5.1. 자전거 대여 리스트" 메뉴명과 {자전거 ID, 자전거 제품명} 리스트 출력
	전달 인자 : const vector<BikeInfo>& cachedList : {자전거 ID, 자전거 제품명} 리스트
	반환값    : 없음
*/
void RentalInfoUI::ShowRentedBike(const vector<BikeInfo>& cachedList) {
	vector<BikeInfo>::const_iterator it;

	out_fp << "5.1. 자전거 대여 리스트" << endl;

	for (it = cachedList.begin(); it != cachedList.end(); it++)
		out_fp << "> " << it->bikeId << " " << it->bikeName << endl;

	out_fp << endl;
}