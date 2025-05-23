#pragma once
#include <string>
#include <vector>
#include "Bike.h"
using namespace std;

// 대여소에 등록된 자전거 리스트를 관리하는 RegisteredBikeCollection 클래스 정의 
class RegisteredBikeCollection {
private:
	vector<Bike*> registeredBike;	// 등록된 자전거 참조 리스트

public:
	void AddBike(string bike_id, string bike_name);
	Bike* FindBike(string bike_id);
	void DeleteAllBike();
};
