#include <iostream>
#include "Client.h"

/*
	�Լ� �̸� : Client::Client
	���	  : Client ������
	���� ���� : string client_id : ȸ�� ID
				string client_password : ȸ�� ��й�ȣ
				string client_phone_num : ȸ�� ��ȭ��ȣ
	��ȯ��    : ����
*/
Client::Client(string client_id, string client_password, string client_phone_num)
	: client_id(client_id), client_password(client_password), client_phone_num(client_phone_num) {}


/*
	�Լ� �̸� : Client::AddRentedBik
	���	  : rentedBikeCollection::AddBike(bike)�� ȣ���� ȸ���� �뿩�� �����Ÿ� �߰�
	���� ���� : Bike* bike : �뿩�� �������� ������
	��ȯ��    : ����
*/
void Client::AddRentedBike(Bike* bike) {
	rentedBikeCollection.AddBike(bike);
}


/*
	�Լ� �̸� : Client::ListRentedBike
	���	  : rentedBikeCollection::GetBikeList�� ȣ���� ȸ���� �뿩�� ������ ����Ʈ�� ��ȯ
	���� ���� : ����
	��ȯ��    : vector<BikeInfo>& -> {�뿩�� ������ ID, �뿩�� ������ ��ǰ��} ����Ʈ
*/
const vector<BikeInfo>& Client::ListRentedBike() {
	return rentedBikeCollection.GetBikeList();
}


/*
	�Լ� �̸� : Client::get_client_id
	���	  : ȸ�� ID�� ��ȯ
	���� ���� : ����
	��ȯ��    : client_id -> ȸ�� ID
*/
string Client::get_client_id() {
	return client_id;
}


/*
	�Լ� �̸� : Client::get_client_password
	���	  : ȸ�� ��й�ȣ�� ��ȯ
	���� ���� : ����
	��ȯ��    : client_password -> ȸ�� ��й�ȣ
*/
string Client::get_client_password() {
	return client_password;
}