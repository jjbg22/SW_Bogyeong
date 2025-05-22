#pragma once
#include <string>
#include <vector>
#include "Bike.h"
using namespace std;

// ���� �뿩�� ������ ����Ʈ�� �����ϴ� RentedBikeCollection Ŭ���� ���� 
class RentedBikeCollection {
private:
	vector<Bike*> rentedBike;		// �뿩�� ������ ���� ����Ʈ
	vector<BikeInfo> cachedList;	// {������ ID, ������ �̸�} ����Ʈ

public:
	void AddBike(Bike* bike);
	const vector<BikeInfo>& GetBikeList();
};