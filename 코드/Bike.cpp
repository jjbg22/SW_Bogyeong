#pragma once
#include <string>
#include "Bike.h"
using namespace std;


/*
	함수 이름 : Bike::Bike
	기능	  : Bike 객체 생성자
	전달 인자 : string bike_id : 자전거 ID
				string bike_name : 자전거 제품명
	반환값    : 없음
*/
Bike::Bike(string bike_id, string bike_name)
	: bike_id(bike_id), bike_name(bike_name) {}


/*
	함수 이름 : Bike::GetBikeIDName
	기능	  : {자전거 ID, 자전거 제품명} 반환
	전달 인자 : 없음
	반환값    : bikeInfo -> {자전거 ID, 자전거 제품명}
*/
BikeInfo Bike::GetBikeIDName() {
	BikeInfo bikeInfo = { bike_id, bike_name };
	return bikeInfo;
}


/*
	함수 이름 : Bike::get_bike_id
	기능	  : 자전거 ID를 반환
	전달 인자 : 없음
	반환값    : bike_id -> 자전거 ID
*/
string Bike::get_bike_id() {
	return bike_id;
}


/*
	함수 이름 : Bike::get_bike_name
	기능	  : 자전거 제품명을 반환
	전달 인자 : 없음
	반환값    : bike_name -> 자전거 제품명
*/
string Bike::get_bike_name() {
	return bike_name;
}