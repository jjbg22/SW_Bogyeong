#include <iostream>
#include "CloseProgramUI.h"
using namespace std;

/*
	함수 이름 : CloseProgramUI::CloseProgramUI
	기능	  : CloseProgramUI 생성자
	전달 인자 : ofstream& out_fp    : 시스템 출력 파일
	반환값    : 없음
*/
CloseProgramUI::CloseProgramUI(ofstream& out_fp)
	: out_fp(out_fp) {}


/*
	함수 이름 : CloseProgramUI::CompleteClose
	기능	  : "6.1. 종료" 메뉴명 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void CloseProgramUI::CompleteClose() {

	out_fp << "6.1. 종료";

}
