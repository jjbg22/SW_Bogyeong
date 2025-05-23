#include <iostream>
#include "RentalBikeUI.h"
using namespace std;

/*
	�Լ� �̸� : RentalBikeUI::RentalBikeUI
	���	  : RentalBikeUI ������
	���� ���� : RentalBike* rentalBike : ������ �뿩 control Ŭ���� ���۷���
	��ȯ��    : ����
*/
RentalBikeUI::RentalBikeUI(RentalBike* rentalBike)
	: rentalBike(rentalBike) {}

/*
	�Լ� �̸� : RentalBikeUI::RequestRental
	���	  : ȸ���� �Է��� ������ ������ ID�� control Ŭ������ �����ϰ�, "4.1. ������ �뿩" �޴���� �뿩�� �������� {������ ID, ������ ��ǰ��}�� ���
	���� ���� : ����
	��ȯ��    : ����
*/
void RentalBikeUI::RequestRental() {
	BikeInfo bike_info;

	in_fp >> bike_id;

	bike_info = rentalBike->RequestRental(bike_id);

	out_fp << "4.1. ������ �뿩" << endl;
	out_fp << "> " << bike_info.bikeId << " " << bike_info.bikeName << endl;
	out_fp << endl;
}