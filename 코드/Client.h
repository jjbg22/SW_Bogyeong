#pragma once
#include <string>
#include <vector>
#include "RentedBikeCollection.h"
#include "Bike.h"
using namespace std;

// 회원 정보 저장하는 Client 클래스 정의 
class Client {
private:
	string client_id;			// 회원 ID
	string client_password;		// 회원 비밀번호
	string client_phone_num;		// 회원 전화번호
	RentedBikeCollection rentedBikeCollection;	// 대여한 자전거 리스트 관리하는 collection class 객체									

public:
	Client() {}
	Client(string client_id, string client_password, string client_phone_num);
	void AddRentedBike(Bike* bike);
	const vector<BikeInfo>& ListRentedBike();
	string get_client_id();
	string get_client_password();
};
