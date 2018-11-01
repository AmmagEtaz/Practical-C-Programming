/* Given an amount of money (less than $1.00), compute the number of quarters, dimes, nickels
 * and pennies needed */

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char line[100];
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    int cents = 0;

    printf("Enter an amount of pennies smaller than 100: $");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &cents);

    if (cents > 99) {
        printf("Error: the amount cannot be higher than $1.00\n");
        return(1);

    } else if (cents < 0) {
        printf("Error: the amount cannot be lower than a penny\n");
        return(1);
    }

    while(1) {
        if (cents >= 25) {
            ++quarters;
            cents -= 25;
        } else if (cents >= 10) {
            ++dimes;
            cents -= 10;
        } else if (cents >= 5) {
            ++nickels;
            cents -= 5;
        } else if (cents >= 1) {
            ++pennies;
            --cents;
        } else if (cents == 0) {
            break;
        }

        }

    printf("Your amount of $%d is equal to %d quarters, %d dimes, %d nickels, %d pennies\n",
           cents, quarters, dimes, nickels, pennies);

    return 0;
}
