#pragma once
#include <string>
#include "RentedBikeCollection.h"
using namespace std;

/*
	�Լ� �̸� : RentedBikeCollection::AddBike
	���	  : ȸ���� �뿩�� ������ ��Ͽ� �߰�
	���� ���� : Bike* bike : Bike ��ü ������
	��ȯ��    : ����
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