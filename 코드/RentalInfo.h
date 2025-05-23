#pragma once
#include <string>
#include "RentalInfoUI.h"
#include "Membership.h"
#include "Client.h"
#include "User.h"
using namespace std;

class RentalInfo {
private:
	RentalInfoUI* rentalInfoUI;		// 자전거 대여 리스트 boundary 클래스 레퍼런스
	Membership* membership;			// Membership 클래스 객체 레퍼런스
	Client* client;					// Client 클래스 객체 레퍼런스
	User* user;						// User 클래스 객체 레퍼런스

public:
	RentalInfo() {}
	RentalInfo(Membership* membership, User* user);
	void set_rentalInfoUI(RentalInfoUI* rentalInfoUI);
	void ShowRentalInfo();

};