#include <iostream>
#include "AddNewBikeUI.h"
using namespace std;

/*
	�Լ� �̸� : AddNewBikeUI::AddNewBikeUI
	���	  : AddNewBikeUI ������
	���� ���� : AddNewBike* addNewBike : ������ ��� control Ŭ���� ���۷���
	��ȯ��    : ����
*/
AddNewBikeUI::AddNewBikeUI(AddNewBike* addNewBike)
	: addNewBike(addNewBike) {}


/*
	�Լ� �̸� : AddNewBikeUI::RegisterNewBike
	���	  : ȸ���� �Է��� ������ ������ ID, ������ ��ǰ���� control Ŭ������ �����ϰ�, "3.1. ������ ���" �޴���� {������ ID, ������ ��ǰ��}�� ���
	���� ���� : ����
	��ȯ��    : ����
*/
void AddNewBikeUI::RegisterNewBike() {
	in_fp >> bike_id >> bike_name;

	addNewBike->RegisterNewBike(bike_id, bike_name);

	out_fp << "3.1. ������ ���" << endl;
	out_fp << "> " << bike_id << " " << bike_name << endl;
	out_fp << endl;
}