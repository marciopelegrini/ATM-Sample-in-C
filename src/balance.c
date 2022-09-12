/**
 * @file balance.c
 * @author Bhavya Thotakura
 * @brief
 * @version 0.1
 * @date 2021-09-06
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "inc/atm.h"
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

float checkBalance(float balance)
{
    printf("You Choose to See your Balance\n");
    printf("\n\n****Your Available Balance is:   $%.2f\n\n", balance);
    return balance;

} // Check Balance
