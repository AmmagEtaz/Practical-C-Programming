/*Write a program that takes hours and minutes as input, and then outputs the total number of minutes.
 * (1 hour 30 minutes = 90 minutes) */

#include <stdio.h>
#include <string.h>

int main()
{
    char hours_input[100], minutes_input[100];
    int hours, minutes;

    printf("\nEnter the hour: ");
    fgets(hours_input, sizeof(hours_input), stdin);
    sscanf(hours_input, "%d", &hours);

    printf("Enter the minutes: ");
    fgets(minutes_input, sizeof(minutes_input), stdin);
    sscanf(minutes_input, "%d", &minutes);
    minutes_input[strlen(minutes_input)-1] = '\0';

    minutes = (hours * 60) + minutes;
    printf("%d hours and %s minutes are comprised of %d total minutes\n\n", hours, minutes_input, minutes);

    return 0;
}
