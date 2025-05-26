#include <iostream>
#include <algorithm>
#include "RentalInfoUI.h"
using namespace std;

/*
	�Լ� �̸� : RentalInfoUI::RentalInfoUI
	���	  : RentalInfoUI ������
	���� ���� : ofstream& out_fp    : �ý��� ��� ����
	��ȯ��    : ����
*/
RentalInfoUI::RentalInfoUI(ofstream& out_fp)
	: out_fp(out_fp) {}


// ������ ���� ����Ʈ ���� ���� �Լ�
/*
	�Լ� �̸� : SortBikeById
	���	  : ������ ID�� ���� ������� ����
	���� ���� : bool compareById(const BikeInfo& a, const BikeInfo& b : ���̵� ũ�⸦ ���� BikeInfo ����Ʈ��
	��ȯ��    : bool -> a�� b���� ������(ID��) : true, ������ : false
*/
bool SortBikeById(const BikeInfo& a, const BikeInfo& b) {
	return a.bikeId < b.bikeId;
}


/*
	�Լ� �̸� : RentalInfoUI::ShowRentedBike
	���	  : "5.1. ������ �뿩 ����Ʈ" �޴���� {������ ID, ������ ��ǰ��} ����Ʈ ���
	���� ���� : const vector<BikeInfo>& cachedList : {������ ID, ������ ��ǰ��} ����Ʈ
	��ȯ��    : ����
*/
void RentalInfoUI::ShowRentedBike(const vector<BikeInfo>& cachedList) {

	vector<BikeInfo> sortedList = cachedList;
	sort(sortedList.begin(), sortedList.end(), SortBikeById);
	
	vector<BikeInfo>::const_iterator it;

	out_fp << "5.1. ������ �뿩 ����Ʈ" << endl;

	for (it = sortedList.begin(); it != sortedList.end(); it++)
		out_fp << "> " << it->bikeId << " " << it->bikeName << endl;

	out_fp << endl;
}