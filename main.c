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

int main() {
    // Local Variables
    int option;
    float balance = 5000.00;
    int choose;

    bool again = true;

    //Menu Pricipal
    while (again) {
        mainMenu();
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Veuillez séléctionner une option :\t");
        scanf("%d", &option);

        switch (option) {
            case 1:
                system("clear");
                checkBalance(balance);
                break;
            case 2:
                system("clear");
                balance = moneyDeposit(balance);
                break;
            case 3:
                system("clear");
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
        printf("Voulez vous faire une autre opération ? :\n");
        printf("< 1 > Oui\n");
        printf("< 2 > Non\n");
        scanf("%d", &choose);

        system("clear");

        if (choose == 2) {
            again = false;
            menuExit();
        }
    }
    return 0;
}
