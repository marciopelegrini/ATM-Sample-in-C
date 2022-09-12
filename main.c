/**
 * @file main.c
 * @author Bhavya Thotakura
 * @brief
 * @version 0.1
 * @date 2021-09-06
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "atm.h"
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// Functions
int mainMenu(void);
float checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
int menuExit(void);
int errorMessage(void);

// Main Code
int main()
{
    // Local Declarations
    int option;
    float balance = 5000.00;
    int choose;

    bool again = true;

    while (again) {
        mainMenu();

        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Your Selection:\t");
        scanf("%d", &option);

        switch (option) {
        case 1:
            system("CLS");
            checkBalance(balance);
            break;
        case 2:
            system("CLS");
            balance = moneyDeposit(balance);
            break;
        case 3:
            system("CLS");
            balance = moneyWithdraw(balance);
            break;

        case 4:
            system("clear");
            menuExit();
            return 0;

        default:
            errorMessage();
            break;
        }

        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to do another transaction:\n");
        printf("&lt; 1 > Yes\n");
        printf("&lt; 2 > No\n");
        scanf("%d", &choose);

        system("CLS");

        if (choose == 2) {
            again = false;
            menuExit();
        }
    }

    return 0;
} // main code
