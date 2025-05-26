#include <iostream>
#include "AddNewBikeUI.h"
using namespace std;

/*
	�Լ� �̸� : AddNewBikeUI::AddNewBikeUI
	���	  : AddNewBikeUI ������
	���� ���� : AddNewBike* addNewBike	: ������ ��� control Ŭ���� ���۷���
				ifstream& in_fp			: ����� �Է� ����
				ofstream& out_fp		: �ý��� ��� ����
	��ȯ��    : ����
*/
AddNewBikeUI::AddNewBikeUI(AddNewBike* addNewBike, ifstream& in_fp, ofstream& out_fp)
	: addNewBike(addNewBike), in_fp(in_fp), out_fp(out_fp) {}


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