#pragma once
#include <string>
#include "CloseProgramUI.h"
#include "RentalStation.h"
#include "Membership.h"
#include "User.h"
using namespace std;

// ���α׷� ���� control Ŭ����
class CloseProgram {
private:
	CloseProgramUI* closeProgramUI;	// ���α׷� ���� boundary Ŭ���� ���۷���
	RentalStation* rentalStation;	// RentalStation Ŭ���� ��ü ���۷���
	Membership* membership;			// Membership Ŭ���� ��ü ���۷���
	User* user;						// User Ŭ���� ��ü ���۷���

public:
	CloseProgram() {}
	CloseProgram(RentalStation* rentalStation, Membership* membership, User* user);
	void set_closeProgramUI(CloseProgramUI* closeProgramUI);
	void ExecuteCloseProgram();
};