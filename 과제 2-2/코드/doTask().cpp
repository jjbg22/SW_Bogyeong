// ��� ����
#include <iostream>
#include <fstream>
#include "SignUp.h"
#include "SignUpUI.h"
#include "SignIn.h"
#include "SignInUI.h"
#include "SignOut.h"
#include "SignOutUI.h"
#include "AddNewBike.h"
#include "AddNewBikeUI.h"
#include "RentalBike.h"
#include "RentalBikeUI.h"
#include "RentalInfo.h"
#include "RentalInfoUI.h"
#include "CloseProgram.h"
#include "CloseProgramUI.h"
#include "Membership.h"
#include "User.h"
#include "RentalStation.h"
#include "Administrator.h"
using namespace std;

// ���� ����
extern ofstream out_fp;
extern ifstream in_fp;


/*
    �Լ� �̸� : doTask
    ���	  : ����ڰ� �Է��� ������ �о� �޴� ����, ���Ͽ� ��� ���
    ���� ���� : ����
    ��ȯ��    : ����
*/
void doTask()
{
    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    // Ŭ���� ��ü ����
    Administrator* administrator = new Administrator("admin", "admin");     // ������ ���� Ŭ���� ��ü
    Membership* membership = new Membership(administrator); // ��ϵ� ����(������, ȸ��) ���� Ŭ���� ��ü
    User* user = new User();                                // �α����� ���� ���� Ŭ���� ��ü
    RentalStation* rentalStation = new RentalStation();     // ������ �뿩��(��ϼ�) Ŭ���� ��ü
 

    while (!is_program_exit)
    {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        in_fp >> menu_level_1 >> menu_level_2;


        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1)
        {
            case 1:
            {
                switch (menu_level_2)
                {
                case 1:     // "1.1. ȸ������" �޴� �κ�
                {
                    SignUp* startSignUP = new SignUp(membership);
                    SignUpUI* startSignUpUI = new SignUpUI(startSignUP);
                    startSignUpUI->CompleteSignUp();
                    delete startSignUP;
                    delete startSignUpUI;
                    break;
                }
                }
                break;
            }
            case 2:
            {
                switch (menu_level_2)
                {
                case 1:     // "2.1. �α���" �޴� �κ�
                {
                    SignIn* startSignIn = new SignIn(membership, user);
                    SignInUI* startSignInUI = new SignInUI(startSignIn);
                    startSignInUI->CompleteSignIn();
                    delete startSignIn;
                    delete startSignInUI;
                    break;
                }
                case 2:     // "2.2. �α׾ƿ�" �޴� �κ�
                {
                    SignOut* startSignOut = new SignOut(user);
                    SignOutUI* startSignOutUI = new SignOutUI();
                    startSignOut->set_signOutUI(startSignOutUI);
                    startSignOut->ExecuteSignOut();
                    delete startSignOut;
                    delete startSignOutUI;
                    break;
                }
                }
                break;
            }
            case 3:
            {
                switch (menu_level_2)
                {
                case 1:     // "3.1. ������ ���" �޴� �κ�
                {
                    AddNewBike* startAddNewBike = new AddNewBike(rentalStation, user);
                    AddNewBikeUI* startAddNewBikeUI = new AddNewBikeUI(startAddNewBike);
                    startAddNewBikeUI->RegisterNewBike();
                    delete startAddNewBike;
                    delete startAddNewBikeUI;
                    break;
                }
                }
                break;
            }
            case 4:
            {
                switch (menu_level_2)
                {
                case 1:     // "4.1. ������ �뿩" �޴� �κ�
                {
                    RentalBike* startRentalBike = new RentalBike(rentalStation, membership, user);
                    RentalBikeUI* startRentalBikeUI = new RentalBikeUI(startRentalBike);
                    startRentalBikeUI->RequestRental();
                    delete startRentalBike;
                    delete startRentalBikeUI;
                    break;
                }
                }
                break;
            }
            case 5:
            {
                switch (menu_level_2)
                {
                case 1:     // "5.1. ������ �뿩 ����Ʈ" �޴� �κ�
                {
                    RentalInfo* startRentalInfo = new RentalInfo(membership, user);
                    RentalInfoUI* startRentalInfoUI = new RentalInfoUI();
                    startRentalInfo->set_rentalInfoUI(startRentalInfoUI);
                    startRentalInfo->ShowRentalInfo();
                    delete startRentalInfo;
                    delete startRentalInfoUI;
                    break;
                }
                }
                break;
            }
            case 6:
            {
                switch (menu_level_2)
                {
                    case 1:   // "6.1. ���ᡰ �޴� �κ�
                    {
                        CloseProgram* startCloseProgram = new CloseProgram(rentalStation, membership, user);
                        CloseProgramUI* startCloseProgramUI = new CloseProgramUI();
                        startCloseProgram->set_closeProgramUI(startCloseProgramUI);
                        startCloseProgram->ExecuteCloseProgram();
                        delete startCloseProgram;
                        delete startCloseProgramUI;
                        is_program_exit = 1;
                        break;;
                    }
                }
                break;
            }
        } 
    }
}
