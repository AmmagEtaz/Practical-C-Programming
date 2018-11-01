/*************************************************************************************************************
Write a program that takes an integer as the number of minutes, and outputs the total hours and minutes.
(90 minutes = 1 hour 30 minutes) 
*************************************************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char minutes_input[100];
    int hours, minutes, remainder_minutes;

    printf("\nEnter the total number of minutes: ");
    fgets(minutes_input, sizeof(minutes_input), stdin);
    sscanf(minutes_input, "%d", &minutes);

    remainder_minutes = minutes % 60;
    hours = minutes / 60;
    printf("%d minutes = %d hour(s) and %d minute(s)\n\n", minutes, hours, remainder_minutes);

    return 0;
}
