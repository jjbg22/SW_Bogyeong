#include <iostream>
#include "RentalStation.h"
using namespace std;

/*
	�Լ� �̸� : RentalStation::AddNewBike
	���	  : registeredBikeCollection.AddBike(bike_id,bike_name)�� ȣ���� �����ڰ� ����� �����Ÿ� �߰�
	���� ���� : string bike_id : ������ ID
				string bike_name : ������ �̸�
	��ȯ��    : ����
*/
void RentalStation::AddNewBike(string bike_id, string bike_name) {
	registeredBikeCollection.AddBike(bike_id,bike_name);
}


/*
	�Լ� �̸� : RentalStation::FindBike
	���	  : registeredBikeCollection.FindBike(bike_id)�� ȣ���� ������ ID�� ������ �˻�
	���� ���� : string bike_id : ������ ID
	��ȯ��    : Bike* : �˻��� �������� ������
*/
Bike* RentalStation::FindBike(string bike_id) {
	return registeredBikeCollection.FindBike(bike_id);
}


/*
	�Լ� �̸� : RentalStation::DeleteAllBike
	���	  : registeredBikeCollection.DeleteAllBike()�� ȣ���� ��ϵ� ��� ������ ��ü ����
	���� ���� : ����
	��ȯ��    : ����
*/
void RentalStation::DeleteAllBike() {
	registeredBikeCollection.DeleteAllBike();
}
