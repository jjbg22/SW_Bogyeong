#pragma once
#include <string>
#include <vector>
#include "Bike.h"
using namespace std;

// 고객이 대여한 자전거 리스트를 관리하는 RentedBikeCollection 클래스 정의 
class RentedBikeCollection {
private:
	vector<Bike*> rentedBike;		// 대여한 자전거 참조 리스트
	vector<BikeInfo> cachedList;	// {자전거 ID, 자전거 이름} 리스트

public:
	void AddBike(Bike* bike);
	const vector<BikeInfo>& GetBikeList();
};