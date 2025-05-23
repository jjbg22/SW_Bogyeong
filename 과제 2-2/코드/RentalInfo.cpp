#include <iostream>
#include <vector>
#include "RentalInfo.h"
using namespace std;

/*
	�Լ� �̸� : RentalInfo::RentalInfo
	���	  : RentalInfo ������
	���� ���� : Membership* membership : Membership Ŭ���� ��ü ���۷���
				User* user : User Ŭ���� ��ü ���۷���
	��ȯ��    : ����
*/
RentalInfo::RentalInfo(Membership* membership, User* user)
	: membership(membership), user(user) {}


/*
	�Լ� �̸� : RentalInfo::set_rentalInfoUI
	���	  : rentalInfoUI �ʱ�ȭ
	���� ���� : RentalInfoUI* rentalInfoUI : ������ �뿩 ����Ʈ boundary Ŭ���� ���۷���
	��ȯ��    : ����
*/
void RentalInfo::set_rentalInfoUI(RentalInfoUI* rentalInfoUI) {
	this->rentalInfoUI = rentalInfoUI;
}


/*
	�Լ� �̸� : RentalInfo::ShowRentalInfo
	���	  : ������� ������ Ȯ���ϰ� ȸ���� ��, ������� ID�� ȸ�� ������ ã�� �뿩�� ������ {������ ID, ������ ��ǰ��} ���� ����Ʈ�� ���
	���� ���� : ����
	��ȯ��    : ����
*/
void RentalInfo::ShowRentalInfo() {
	string user_id;

	if (user->get_status() == "client") {
		user_id = user->get_user_id();
		client = membership->FindClientUser(user_id);
		const vector<BikeInfo>& cashedList = client->ListRentedBike();
		rentalInfoUI->ShowRentedBike(cashedList);
	}
}