#pragma once
#include <string>
using namespace std;

// BikeInfo structure ����
typedef struct bikeInfo{
    string bikeId;             // ������ ID
    string bikeName;           // ������ �̸�                                         
} BikeInfo;


// ������ ���� �����ϴ� Bike Ŭ���� ���� 
class Bike {
private:
    string bike_id;         // ������ ID
    string bike_name;       // ������ �̸�

public:
    Bike() {}
    Bike(string bike_id, string bike_name);
    BikeInfo GetBikeIDName();
    string get_bike_id();
    string get_bike_name();
};