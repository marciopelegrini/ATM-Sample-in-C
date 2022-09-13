#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include"atm.h"

float moneyDeposit(float balance) {
    float deposit;
    printf("--------------------------\n");
    printf("Votre solde est : $%.2f\n\n", balance);
    printf("Veuillez entrer le montant du depôt : \n");
    scanf("%f", &deposit);

    balance += deposit;

    printf("\n****Maintenant votre solde disponible est : $%.2f\n\n", balance);
    return balance;
}