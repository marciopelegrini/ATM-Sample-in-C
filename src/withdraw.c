#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include"atm.h"

float moneyWithdraw(float balance) {
    float withdraw;
    bool back = true;

    printf("------------------------------\n");
    printf("$$$$Votre solde disponible est : $%.2f\n\n", balance);

    while (back) {
        printf("Entrez le montant souhaité pour le retrait :\n");
        scanf("%f", &withdraw);

        if (withdraw < balance) {
            back = false;
            balance -= withdraw;
            printf("\n$$$$Votre retrait est :  $%.2f\n", withdraw);
            printf("****Votre nouveau solde est :   $%.2f\n\n", balance);

        } else {
            printf("+++Votre solde est insufissant+++\n");
            printf("Veuillez contactez votre succursale!\n");
            printf("****Votre solde est :   $%.2f\n\n", balance);

        }
    }
    return balance;
}
