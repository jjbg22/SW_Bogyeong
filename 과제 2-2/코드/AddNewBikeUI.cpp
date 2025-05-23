#include <iostream>
#include "AddNewBikeUI.h"
using namespace std;

/*
	함수 이름 : AddNewBikeUI::AddNewBikeUI
	기능	  : AddNewBikeUI 생성자
	전달 인자 : AddNewBike* addNewBike : 자전거 등록 control 클래스 레퍼런스
	반환값    : 없음
*/
AddNewBikeUI::AddNewBikeUI(AddNewBike* addNewBike)
	: addNewBike(addNewBike) {}


/*
	함수 이름 : AddNewBikeUI::RegisterNewBike
	기능	  : 회원이 입력한 파일의 자전거 ID, 자전거 제품명을 control 클래스에 전달하고, "3.1. 자전거 등록" 메뉴명과 {자전거 ID, 자전거 제품명}를 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void AddNewBikeUI::RegisterNewBike() {
	in_fp >> bike_id >> bike_name;

	addNewBike->RegisterNewBike(bike_id, bike_name);

	out_fp << "3.1. 자전거 등록" << endl;
	out_fp << "> " << bike_id << " " << bike_name << endl;
	out_fp << endl;
}