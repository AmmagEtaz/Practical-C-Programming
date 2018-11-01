/********************************************************************************************
Given an amount of money (less than $1.00), compute the number of quarters, dimes, nickels
and pennies needed 
*********************************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char line[5];
    float total;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;

    printf("Enter an amount of money smaller than 1.00: $");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%f", &total);

    if (total < 1.00) {
        int totalInt = total * 100;
        quarters = totalInt / 25;
        totalInt = totalInt % 25;
        dimes = totalInt / 10;
        totalInt = totalInt % 10;
        nickels = totalInt / 5;
        totalInt = totalInt % 5;
        pennies = totalInt / 1;
        pennies = pennies + 1;

    } else {
        printf("Amount can't be higher than $1.00\n");
    }

    printf("Your amount of $%.2f is equal to %d quarters, %d dimes, %d nickels, %d pennies\n",
           total, quarters, dimes, nickels, pennies);

    return 0;
}
