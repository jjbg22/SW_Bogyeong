#include <iostream>
#include "CloseProgramUI.h"
using namespace std;

/*
	�Լ� �̸� : CloseProgramUI::CloseProgramUI
	���	  : CloseProgramUI ������
	���� ���� : ofstream& out_fp    : �ý��� ��� ����
	��ȯ��    : ����
*/
CloseProgramUI::CloseProgramUI(ofstream& out_fp)
	: out_fp(out_fp) {}


/*
	�Լ� �̸� : CloseProgramUI::CompleteClose
	���	  : "6.1. ����" �޴��� ���
	���� ���� : ����
	��ȯ��    : ����
*/
void CloseProgramUI::CompleteClose() {

	out_fp << "6.1. ����";

}
