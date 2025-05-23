#include <iostream>
#include "Client.h"

/*
	함수 이름 : Client::Client
	기능	  : Client 생성자
	전달 인자 : string client_id : 회원 ID
				string client_password : 회원 비밀번호
				string client_phone_num : 회원 전화번호
	반환값    : 없음
*/
Client::Client(string client_id, string client_password, string client_phone_num)
	: client_id(client_id), client_password(client_password), client_phone_num(client_phone_num) {}


/*
	함수 이름 : Client::AddRentedBik
	기능	  : rentedBikeCollection::AddBike(bike)를 호출해 회원이 대여한 자전거를 추가
	전달 인자 : Bike* bike : 대여한 자전거의 포인터
	반환값    : 없음
*/
void Client::AddRentedBike(Bike* bike) {
	rentedBikeCollection.AddBike(bike);
}


/*
	함수 이름 : Client::ListRentedBike
	기능	  : rentedBikeCollection::GetBikeList를 호출해 회원이 대여한 자전거 리스트를 반환
	전달 인자 : 없음
	반환값    : vector<BikeInfo>& -> {대여한 자전거 ID, 대여한 자전거 제품명} 리스트
*/
const vector<BikeInfo>& Client::ListRentedBike() {
	return rentedBikeCollection.GetBikeList();
}


/*
	함수 이름 : Client::get_client_id
	기능	  : 회원 ID를 반환
	전달 인자 : 없음
	반환값    : client_id -> 회원 ID
*/
string Client::get_client_id() {
	return client_id;
}


/*
	함수 이름 : Client::get_client_password
	기능	  : 회원 비밀번호을 반환
	전달 인자 : 없음
	반환값    : client_password -> 회원 비밀번호
*/
string Client::get_client_password() {
	return client_password;
}