// ��� ����
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

// ���� ����
extern ofstream out_fp;
extern ifstream in_fp;

void doTask()
{
    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    // Ŭ���� ��ü ����
    Membership* membership = new Membership();
    User* user = new User();


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
                    break;
                }
                }
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
                    break;
                }
                case 2:     // "2.2. �α׾ƿ�" �޴� �κ�
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
                    case 1:   // "6.1. ���ᡰ �޴� �κ�
                    {

                        is_program_exit = 1;
                        break;;
                    }
                }
            }
        } 
    }
}