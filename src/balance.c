#include "atm.h"
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

float checkBalance(float balance) {
    printf("---------------------------------\n");
    printf("\n\nVotre solde disponible est : $%.2f\n\n", balance);
    return balance;

}
