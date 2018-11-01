/* Given an amount of money (less than $1.00), compute the number of quarters, dimes, nickels
 * and pennies needed */

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char line[5];
    float total, quarters, dimes, nickels, pennies, remainder;

    printf("Enter an amount of money smaller than 1.00: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%f", &total);

    if (total < 1.00) {
        quarters = total / 0.25;
        remainder = fmod(total, 0.25);
        dimes = remainder / 0.10;
        remainder = fmod(remainder, 0.10);
        nickels = remainder / 0.05;
        remainder = fmod(remainder, 0.05);
        pennies = remainder / 0.01;
        printf("pennies: %.2f\n", pennies);

    } else {
        printf("Amount can't be higher than $1.00");
    }

    int quartersInt = quarters;
    int dimesInt = dimes;
    int nickelsInt = nickels;
    int penniesInt = pennies * 1;
    printf("Your amount of $%.2f is equal to %d quarters, %d dimes, %d nickels, %d pennies\n",
           total, quartersInt, dimesInt, nickelsInt, penniesInt);

    return 0;
}
