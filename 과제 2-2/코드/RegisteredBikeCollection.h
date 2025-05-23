#pragma once
#include <string>
#include <vector>
#include "Bike.h"
using namespace std;

// �뿩�ҿ� ��ϵ� ������ ����Ʈ�� �����ϴ� RegisteredBikeCollection Ŭ���� ���� 
class RegisteredBikeCollection {
private:
	vector<Bike*> registeredBike;	// ��ϵ� ������ ���� ����Ʈ

public:
	void AddBike(string bike_id, string bike_name);
	Bike* FindBike(string bike_id);
	void DeleteAllBike();
};
