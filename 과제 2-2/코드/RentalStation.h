#pragma once
#include <string>
#include "Bike.h"
#include "RegisteredBikeCollection.h"
using namespace std;

// �����ڰ� ����� �����Ÿ� �����ϴ� RentalStation Ŭ���� ���� 
class RentalStation {
private:
	RegisteredBikeCollection registeredBikeCollection;	// ��ϵ� ������ ����Ʈ �����ϴ� collection class ��ü

public:
	void AddNewBike(string bike_id, string bike_name);
	Bike* FindBike(string bike_id);
	void DeleteAllBike();
};