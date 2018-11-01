/* A leap year is any year divisible by 4, unless the year is divisible by 100, but not 400.
 * Write a program to tell if a year is a leap year */

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char line[100];
    int year;
    int leap_year = 0;

    printf("Enter year: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &year);


    if (year % 4 == 0) {
            leap_year = 1;

            if (year % 100 == 0 && year % 400 != 0) {
                    leap_year = 0;
            }

    }

    if (leap_year == 1) {

        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }

    return 0;
}
