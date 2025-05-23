#include <iostream>
#include "RentalStation.h"
using namespace std;

/*
	함수 이름 : RentalStation::AddNewBike
	기능	  : registeredBikeCollection.AddBike(bike_id,bike_name)를 호출해 관리자가 등록한 자전거를 추가
	전달 인자 : string bike_id : 자전거 ID
				string bike_name : 자전거 이름
	반환값    : 없음
*/
void RentalStation::AddNewBike(string bike_id, string bike_name) {
	registeredBikeCollection.AddBike(bike_id,bike_name);
}


/*
	함수 이름 : RentalStation::FindBike
	기능	  : registeredBikeCollection.FindBike(bike_id)를 호출해 자전거 ID로 자전거 검색
	전달 인자 : string bike_id : 자전거 ID
	반환값    : Bike* : 검색한 자전거의 포인터
*/
Bike* RentalStation::FindBike(string bike_id) {
	return registeredBikeCollection.FindBike(bike_id);
}


/*
	함수 이름 : RentalStation::DeleteAllBike
	기능	  : registeredBikeCollection.DeleteAllBike()를 호출해 등록된 모든 자전거 객체 삭제
	전달 인자 : 없음
	반환값    : 없음
*/
void RentalStation::DeleteAllBike() {
	registeredBikeCollection.DeleteAllBike();
}
