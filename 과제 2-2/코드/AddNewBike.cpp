#include <iostream>
#include "AddNewBike.h"
using namespace std;

/*
	�Լ� �̸� : AddNewBike::AddNewBike
	���	  : AddNewBike ������
	���� ���� : RentalStation* rentalStation : RentalStation Ŭ���� ��ü ���۷���
				User* user : User Ŭ���� ��ü ���۷���
	��ȯ��    : ����
*/
AddNewBike::AddNewBike(RentalStation* rentalStation, User* user)
	: rentalStation(rentalStation), user(user){}


/*
	�Լ� �̸� : AddNewBike::RegisterNewBike
	���	  : ������� ������ Ȯ���ϰ� �������� ��, �Է��� �����Ÿ� ������ ��Ͽ� ���
	���� ���� : string bike_id : ������ ID
				string bike_name : ������ �̸�
	��ȯ��    : ����
*/
void AddNewBike::RegisterNewBike(string bike_id, string bike_name) {
	if (user->get_status() == "admin")
		rentalStation->AddNewBike(bike_id, bike_name);
}