#pragma once
#include <string>
using namespace std;

// BikeInfo structure 정의
typedef struct bikeInfo{
    string bikeId;             // 자전거 ID
    string bikeName;           // 자전거 제품명                                         
} BikeInfo;


// 자전거 정보 저장하는 Bike 클래스 정의 
class Bike {
private:
    string bike_id;         // 자전거 ID
    string bike_name;       // 자전거 제품명

public:
    Bike() {}
    Bike(string bike_id, string bike_name);
    BikeInfo GetBikeIDName();
    string get_bike_id();
    string get_bike_name();
};