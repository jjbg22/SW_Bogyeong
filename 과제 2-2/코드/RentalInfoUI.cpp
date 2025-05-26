#include <iostream>
#include <algorithm>
#include "RentalInfoUI.h"
using namespace std;

/*
	함수 이름 : RentalInfoUI::RentalInfoUI
	기능	  : RentalInfoUI 생성자
	전달 인자 : ofstream& out_fp    : 시스템 출력 파일
	반환값    : 없음
*/
RentalInfoUI::RentalInfoUI(ofstream& out_fp)
	: out_fp(out_fp) {}


// 자전거 정렬 리스트 전용 전역 함수
/*
	함수 이름 : SortBikeById
	기능	  : 자전거 ID를 비교해 순서대로 정렬
	전달 인자 : bool compareById(const BikeInfo& a, const BikeInfo& b : 아이디 크기를 비교할 BikeInfo 리스트들
	반환값    : bool -> a가 b보다 빠르면(ID순) : true, 느리면 : false
*/
bool SortBikeById(const BikeInfo& a, const BikeInfo& b) {
	return a.bikeId < b.bikeId;
}


/*
	함수 이름 : RentalInfoUI::ShowRentedBike
	기능	  : "5.1. 자전거 대여 리스트" 메뉴명과 {자전거 ID, 자전거 제품명} 리스트 출력
	전달 인자 : const vector<BikeInfo>& cachedList : {자전거 ID, 자전거 제품명} 리스트
	반환값    : 없음
*/
void RentalInfoUI::ShowRentedBike(const vector<BikeInfo>& cachedList) {

	vector<BikeInfo> sortedList = cachedList;
	sort(sortedList.begin(), sortedList.end(), SortBikeById);
	
	vector<BikeInfo>::const_iterator it;

	out_fp << "5.1. 자전거 대여 리스트" << endl;

	for (it = sortedList.begin(); it != sortedList.end(); it++)
		out_fp << "> " << it->bikeId << " " << it->bikeName << endl;

	out_fp << endl;
}