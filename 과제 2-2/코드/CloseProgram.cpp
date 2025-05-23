#include <iostream>
#include "CloseProgram.h"
using namespace std;

/*
	함수 이름 : CloseProgram::CloseProgram
	기능	  : CloseProgram 생성자
	전달 인자 : RentalStation* rentalStation : RentalStation 클래스 객체 레퍼런스
				Membership* membership : Membership 클래스 객체 레퍼런스
				User* user : User 클래스 객체 레퍼런스
	반환값    : 없음
*/
CloseProgram::CloseProgram(RentalStation* rentalStation, Membership* membership, User* user)
	: rentalStation(rentalStation), membership(membership), user(user) {}


/*
	함수 이름 : CloseProgram::set_closeProgramUI
	기능	  : closeProgramUI 초기화
	전달 인자 : CloseProgramUI* closeProgramUI : 프로그램 종료 boundary 클래스 레퍼런스
	반환값    : 없음
*/
void CloseProgram::set_closeProgramUI(CloseProgramUI* closeProgramUI) {
	this->closeProgramUI = closeProgramUI;
}


/*
	함수 이름 : CloseProgram::ExecuteCloseProgram
	기능	  : 모든 자전거, RentalStation 객체, 모든 회원과 관리자, Membership 객체, User 객체를 삭제 
	전달 인자 : 없음
	반환값    : 없음
*/
void CloseProgram::ExecuteCloseProgram() {

	rentalStation->DeleteAllBike();
	delete rentalStation;

	membership->DeleteAllMember();
	delete membership;

	delete user;

	closeProgramUI->CompleteClose();
}