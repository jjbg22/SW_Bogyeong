// 헤더 선언
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

// 변수 선언
extern ofstream out_fp;
extern ifstream in_fp;


/*
    함수 이름 : doTask
    기능	  : 사용자가 입력한 파일을 읽어 메뉴 수행, 파일에 결과 출력
    전달 인자 : 없음
    반환값    : 없음
*/
void doTask()
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    // 클래스 객체 생성
    Administrator* administrator = new Administrator("admin", "admin");     // 관리자 계정 클래스 객체
    Membership* membership = new Membership(administrator); // 등록된 계정(관리자, 회원) 관리 클래스 객체
    User* user = new User();                                // 로그인한 계정 관리 클래스 객체
    RentalStation* rentalStation = new RentalStation();     // 자전거 대여소(등록소) 클래스 객체
 

    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        in_fp >> menu_level_1 >> menu_level_2;


        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
            case 1:
            {
                switch (menu_level_2)
                {
                case 1:     // "1.1. 회원가입" 메뉴 부분
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
                case 1:     // "2.1. 로그인" 메뉴 부분
                {
                    SignIn* startSignIn = new SignIn(membership, user);
                    SignInUI* startSignInUI = new SignInUI(startSignIn);
                    startSignInUI->CompleteSignIn();
                    delete startSignIn;
                    delete startSignInUI;
                    break;
                }
                case 2:     // "2.2. 로그아웃" 메뉴 부분
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
                case 1:     // "3.1. 자전거 등록" 메뉴 부분
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
                case 1:     // "4.1. 자전거 대여" 메뉴 부분
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
                case 1:     // "5.1. 자전거 대여 리스트" 메뉴 부분
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
                    case 1:   // "6.1. 종료“ 메뉴 부분
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
