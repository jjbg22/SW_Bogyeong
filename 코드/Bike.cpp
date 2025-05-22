#pragma once
#include <string>
#include "Bike.h"
using namespace std;


/*
	�Լ� �̸� : Bike::Bike
	���	  : Bike ��ü ������
	���� ���� : string bike_id : ������ ID
				string bike_name : ������ �̸�
	��ȯ��    : ����
*/
Bike::Bike(string bike_id, string bike_name)
	: bike_id(bike_id), bike_name(bike_name) {}


/*
	�Լ� �̸� : Bike::GetBikeIDName
	���	  : {������ ID, ������ �̸�} ��ȯ
	���� ���� : ����
	��ȯ��    : bikeInfo -> {������ ID, ������ �̸�}
*/
BikeInfo Bike::GetBikeIDName() {
	BikeInfo bikeInfo = { bike_id, bike_name };
	return bikeInfo;
}


/*
	�Լ� �̸� : Bike::get_bike_id
	���	  : ������ ID�� ��ȯ
	���� ���� : ����
	��ȯ��    : bike_id -> ������ ID
*/
string Bike::get_bike_id() {
	return bike_id;
}


/*
	�Լ� �̸� : Bike::get_bike_name
	���	  : ������ �̸��� ��ȯ
	���� ���� : ����
	��ȯ��    : bike_name -> ������ �̸�
*/
string Bike::get_bike_name() {
	return bike_name;
}