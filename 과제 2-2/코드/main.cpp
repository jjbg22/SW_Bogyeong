// ��� ����
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void doTask();

// ���� ����
ofstream out_fp;
ifstream in_fp;


/*
    �Լ� �̸� : main
    ���	  : ������ ���� doTask() �Լ� ȣ���� ������ �� ������ ����
    ���� ���� : ����
    ��ȯ��    : ����
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