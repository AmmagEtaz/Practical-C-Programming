/********************************************************************************************
Given an amount of money (less than $1.00), compute the number of quarters, dimes, nickels
and pennies needed 
*********************************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float money;
    int quarters, dimes, nickels, pennies;

    printf("Input Money (less than $1.00): ");
    scanf("%f", &money);

    if(money < 1.00 || money => 0.00)
    {
        money *= 100;
        quarters = money / 25;
        printf("Quarters: %d\n", quarters);
        money = money - (quarters * 25);
        dimes = money / 10;
        printf("Dimes: %d\n", dimes);
        money = money - (dimes * 10);
        nickels = money / 5;
        printf("Nickels: %d\n", nickels);
        money = money - (nickels * 5);
        pennies = money / 1;
        printf("Pennies: %d\n", pennies);
    } else
    {
        printf("Invalid number: please input a number between 0.00 and 1.00\n");
        return 0;
    }

    return 0;
}






