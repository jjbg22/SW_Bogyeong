#pragma once
#include <string>
#include "RentedBikeCollection.h"
using namespace std;

/*
	함수 이름 : RentedBikeCollection::AddBike
	기능	  : 회원이 대여한 자전거 목록에 추가
	전달 인자 : Bike* bike : Bike 객체 포인터
	반환값    : 없음
*/
void RentedBikeCollection::AddBike(Bike* bike) {
	rentedBike.push_back(bike);
}


const vector<BikeInfo>& RentedBikeCollection::GetBikeList(){
	cachedList.clear();
	for (int i = 0; i < rentedBike.size(); i++) {
		cachedList.push_back({
			rentedBike[i]->get_bike_id(), 
			rentedBike[i]->get_bike_name() 
		});
	}
	return cachedList;
}