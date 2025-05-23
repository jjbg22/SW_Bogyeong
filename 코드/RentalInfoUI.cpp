#include <iostream>
#include "RentalInfoUI.h"
using namespace std;

// ���� ����
extern ofstream out_fp;
extern ifstream in_fp;

/*
	�Լ� �̸� : RentalInfoUI::ShowRentedBike
	���	  : "5.1. ������ �뿩 ����Ʈ" �޴���� {������ ID, ������ ��ǰ��} ����Ʈ ���
	���� ���� : const vector<BikeInfo>& cachedList : {������ ID, ������ ��ǰ��} ����Ʈ
	��ȯ��    : ����
*/
void RentalInfoUI::ShowRentedBike(const vector<BikeInfo>& cachedList) {
	vector<BikeInfo>::const_iterator it;

	out_fp << "5.1. ������ �뿩 ����Ʈ" << endl;

	for (it = cachedList.begin(); it != cachedList.end(); it++)
		out_fp << "> " << it->bikeId << " " << it->bikeName << endl;

	out_fp << endl;
}