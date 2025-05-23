#pragma once
#include <string>
#include <fstream>
#include "AddNewBike.h"
using namespace std;

// 변수 선언
extern ofstream out_fp;
extern ifstream in_fp;

class AddNewBikeUI {
private:
	AddNewBike* addNewBike;		// 자전거 등록 control 클래스 레퍼런스
	string bike_id;				// 자전거 ID
	string bike_name;			// 자전거 제품명

public:
	AddNewBikeUI() {}
	AddNewBikeUI(AddNewBike* addNewBike);
	void RegisterNewBike();
};