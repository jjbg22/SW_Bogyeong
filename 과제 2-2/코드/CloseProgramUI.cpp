#include <iostream>
#include "CloseProgramUI.h"
using namespace std;

// 변수 선언
extern ofstream out_fp;
extern ifstream in_fp;

/*
	함수 이름 : CloseProgramUI::CompleteClose
	기능	  : "6.1. 종료" 메뉴명 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void CloseProgramUI::CompleteClose() {

	out_fp << "6.1. 종료";

}
