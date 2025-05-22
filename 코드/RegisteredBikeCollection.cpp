#pragma once
#include <string>
#include "RegisteredBikeCollection.h"
using namespace std;

/*
	�Լ� �̸� : RentedBikeCollection::AddBike
	���	  : �����ڰ� ����� �����Ÿ� ������ ��Ͽ� �߰�
	���� ���� : string bike_id : ������ ID
				string bike_name : ������ �̸�
	��ȯ��    : ����
*/
void RegisteredBikeCollection::AddBike(string bike_id, string bike_name) {
	Bike* newBike = new Bike(bike_id, bike_name);
	registeredBike.push_back(newBike);
}


/*
	�Լ� �̸� : RegisteredBikeCollection::FindBike
	���	  : ������ ID�� �����Ÿ� �˻��� Bike* ��ȯ
	���� ���� : string bike_id : ������ ID
	��ȯ��    : Bike* : �˻��� �������� ������
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
	�Լ� �̸� : RegisteredBikeCollection::DeleteAllBike
	���	  : ��ϵ� ������ ��ü�� ��� ����
	���� ���� : ����
	��ȯ��    : ����
*/
void RegisteredBikeCollection::DeleteAllBike() {
	vector<Bike*>::iterator it;

	for (it = registeredBike.begin(); it != registeredBike.end(); it++) {
		delete* it;
		it = registeredBike.erase(it);
	}
}