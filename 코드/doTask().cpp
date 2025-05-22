// 헤더 선언
#include <iostream>
#include <fstream>
#include "SignUp.h"
#include "SignUpUI.h"
#include "SignIn.h"
#include "SignInUI.h"
#include "SignOut.h"
#include "SignOutUI.h"
#include "Membership.h"
#include "User.h"
using namespace std;

// 변수 선언
extern ofstream out_fp;
extern ifstream in_fp;

void doTask()
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    // 클래스 객체 생성
    Membership* membership = new Membership();
    User* user = new User();


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
                    break;
                }
                }
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
                    break;
                }
                case 2:     // "2.2. 로그아웃" 메뉴 부분
                {
                    SignOut* startSignOut = new SignOut(user);
                    SignOutUI* startSignOutUI = new SignOutUI();
                    startSignOut->set_signOutUI(startSignOutUI);
                    startSignOut->ExcuteSignOut();
                    break;
                }
                }
            }
            case 7:
            {
                switch (menu_level_2)
                {
                    case 1:   // "6.1. 종료“ 메뉴 부분
                    {

                        is_program_exit = 1;
                        break;;
                    }
                }
            }
        } 
    }
}