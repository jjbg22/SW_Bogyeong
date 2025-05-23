#pragma once
#include <string>
#include <vector>
#include "RentedBikeCollection.h"
#include "Bike.h"
using namespace std;

// ȸ�� ���� �����ϴ� Client Ŭ���� ���� 
class Client {
private:
	string client_id;			// ȸ�� ID
	string client_password;		// ȸ�� ��й�ȣ
	string client_phone_num;		// ȸ�� ��ȭ��ȣ
	RentedBikeCollection rentedBikeCollection;	// �뿩�� ������ ����Ʈ �����ϴ� collection class ��ü									

public:
	Client() {}
	Client(string client_id, string client_password, string client_phone_num);
	void AddRentedBike(Bike* bike);
	const vector<BikeInfo>& ListRentedBike();
	string get_client_id();
	string get_client_password();
};
