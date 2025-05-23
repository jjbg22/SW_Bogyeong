#pragma once
#include <string>
#include "RentalInfoUI.h"
#include "Membership.h"
#include "Client.h"
#include "User.h"
using namespace std;

class RentalInfo {
private:
	RentalInfoUI* rentalInfoUI;		// ������ �뿩 ����Ʈ boundary Ŭ���� ���۷���
	Membership* membership;			// Membership Ŭ���� ��ü ���۷���
	Client* client;					// Client Ŭ���� ��ü ���۷���
	User* user;						// User Ŭ���� ��ü ���۷���

public:
	RentalInfo() {}
	RentalInfo(Membership* membership, User* user);
	void set_rentalInfoUI(RentalInfoUI* rentalInfoUI);
	void ShowRentalInfo();

};