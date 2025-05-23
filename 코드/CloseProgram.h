#pragma once
#include <string>
#include "CloseProgramUI.h"
#include "RentalStation.h"
#include "Membership.h"
#include "User.h"
using namespace std;

// 프로그램 종료 control 클래스
class CloseProgram {
private:
	CloseProgramUI* closeProgramUI;	// 프로그램 종료 boundary 클래스 레퍼런스
	RentalStation* rentalStation;	// RentalStation 클래스 객체 레퍼런스
	Membership* membership;			// Membership 클래스 객체 레퍼런스
	User* user;						// User 클래스 객체 레퍼런스

public:
	CloseProgram() {}
	CloseProgram(RentalStation* rentalStation, Membership* membership, User* user);
	void set_closeProgramUI(CloseProgramUI* closeProgramUI);
	void ExecuteCloseProgram();
};