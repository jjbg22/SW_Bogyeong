#include <iostream>
#include "RentalBikeUI.h"
using namespace std;

/*
	�Լ� �̸� : RentalBikeUI::RentalBikeUI
	���	  : RentalBikeUI ������
	���� ���� : RentalBike* rentalBike : ������ �뿩 control Ŭ���� ���۷���
				ifstream& in_fp			: ����� �Է� ����
				ofstream& out_fp		: �ý��� ��� ����
	��ȯ��    : ����
*/
RentalBikeUI::RentalBikeUI(RentalBike* rentalBike, ifstream& in_fp, ofstream& out_fp)
	: rentalBike(rentalBike), in_fp(in_fp), out_fp(out_fp) {}

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