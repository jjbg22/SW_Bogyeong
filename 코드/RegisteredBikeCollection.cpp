#pragma once
#include <string>
#include "RegisteredBikeCollection.h"
using namespace std;

/*
	함수 이름 : RentedBikeCollection::AddBike
	기능	  : 관리자가 등록한 자전거를 자전거 목록에 추가
	전달 인자 : string bike_id : 자전거 ID
				string bike_name : 자전거 이름
	반환값    : 없음
*/
void RegisteredBikeCollection::AddBike(string bike_id, string bike_name) {
	Bike* newBike = new Bike(bike_id, bike_name);
	registeredBike.push_back(newBike);
}


/*
	함수 이름 : RegisteredBikeCollection::FindBike
	기능	  : 자전거 ID로 자전거를 검색해 Bike* 반환
	전달 인자 : string bike_id : 자전거 ID
	반환값    : Bike* : 검색한 자전거의 포인터
*/
Bike* RegisteredBikeCollection::FindBike(string bike_id) {
	vector<Bike*>::iterator it;

	for (it = registeredBike.begin(); it != registeredBike.end(); it++)
		if ((*it)->get_bike_id() == bike_id) {
			return *it;
			break;
		}
}


/*
	함수 이름 : RegisteredBikeCollection::DeleteAllBike
	기능	  : 등록된 자전거 객체를 모두 삭제
	전달 인자 : 없음
	반환값    : 없음
*/
void RegisteredBikeCollection::DeleteAllBike() {
	vector<Bike*>::iterator it;

	for (it = registeredBike.begin(); it != registeredBike.end(); it++) {
		delete* it;
		it = registeredBike.erase(it);
	}
}