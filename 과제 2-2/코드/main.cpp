// 헤더 선언
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();

// 변수 선언
ofstream out_fp;
ifstream in_fp;


/*
    함수 이름 : main
    기능	  : 파일을 열고 doTask() 함수 호출해 수행한 후 파일을 닫음
    전달 인자 : 없음
    반환값    : 없음
*/
int main()
{

    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    doTask();

    out_fp.close();
    in_fp.close();

    return 0;

}