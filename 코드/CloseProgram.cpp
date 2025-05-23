#include <iostream>
#include "CloseProgram.h"
using namespace std;

/*
	�Լ� �̸� : CloseProgram::CloseProgram
	���	  : CloseProgram ������
	���� ���� : RentalStation* rentalStation : RentalStation Ŭ���� ��ü ���۷���
				Membership* membership : Membership Ŭ���� ��ü ���۷���
				User* user : User Ŭ���� ��ü ���۷���
	��ȯ��    : ����
*/
CloseProgram::CloseProgram(RentalStation* rentalStation, Membership* membership, User* user)
	: rentalStation(rentalStation), membership(membership), user(user) {}


/*
	�Լ� �̸� : CloseProgram::set_closeProgramUI
	���	  : closeProgramUI �ʱ�ȭ
	���� ���� : CloseProgramUI* closeProgramUI : ���α׷� ���� boundary Ŭ���� ���۷���
	��ȯ��    : ����
*/
void CloseProgram::set_closeProgramUI(CloseProgramUI* closeProgramUI) {
	this->closeProgramUI = closeProgramUI;
}


/*
	�Լ� �̸� : CloseProgram::ExecuteCloseProgram
	���	  : ��� ������, RentalStation ��ü, ��� ȸ���� ������, Membership ��ü, User ��ü�� ���� 
	���� ���� : ����
	��ȯ��    : ����
*/
void CloseProgram::ExecuteCloseProgram() {

	rentalStation->DeleteAllBike();
	delete rentalStation;

	membership->DeleteAllMember();
	delete membership;

	delete user;

	closeProgramUI->CompleteClose();
}