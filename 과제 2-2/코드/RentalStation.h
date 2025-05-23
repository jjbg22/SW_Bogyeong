#pragma once
#include <string>
#include "Bike.h"
#include "RegisteredBikeCollection.h"
using namespace std;

// 관리자가 등록한 자전거를 관리하는 RentalStation 클래스 정의 
class RentalStation {
private:
	RegisteredBikeCollection registeredBikeCollection;	// 등록된 자전거 리스트 관리하는 collection class 객체

public:
	void AddNewBike(string bike_id, string bike_name);
	Bike* FindBike(string bike_id);
	void DeleteAllBike();
};