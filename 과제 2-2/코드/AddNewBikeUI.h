#pragma once
#include <string>
#include <fstream>
#include "AddNewBike.h"
using namespace std;

// 변수 선언
extern ofstream out_fp;
extern ifstream in_fp;

// 자전거 등록 boundary 클래스
class AddNewBikeUI {
private:
	AddNewBike* addNewBike;		// 자전거 등록 control 클래스 레퍼런스
	string bike_id;				// 자전거 ID
	string bike_name;			// 자전거 제품명
	ifstream& in_fp;			// 사용자 입력 파일
	ofstream& out_fp;			// 시스템 출력 파일

public:
	AddNewBikeUI(AddNewBike* addNewBike, ifstream& in_fp, ofstream& out_fp);
	void RegisterNewBike();
};