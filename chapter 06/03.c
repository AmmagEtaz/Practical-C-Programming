/***********************************************************************
Modify exercise 6-2 to print a + or - after the letter grade, based
on the last digit of the score. Modifiers are:

last digit  modifier
----------  --------
 1-3         -
 4-7         <blank>
 8-0         +

For example, 81=B-, 94=A, and 68=D+. An F is only an F. There is
no F+ or F-.
***********************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char line[100];
    char grade, plus_minus;
    int percentage_right, percentage_digit;

    printf("Enter percentage of correct answers: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d%%", &percentage_right);
    if (percentage_right >= 91.0) {
            grade = 'A';
    } else if (percentage_right >= 81.0) {
            grade = 'B';
    } else if (percentage_right >= 71.0) {
            grade = 'C';
    } else if (percentage_right >= 61.0) {
            grade = 'D';
    } else {
            grade = 'F';
    }

    percentage_digit = percentage_right % 10;
    if (percentage_digit < 4 ) {
        plus_minus = '-';
    } else if (percentage_digit > 7) {
        plus_minus = '+';
    } else {
        plus_minus = ' ';
    }

    printf("The grade is %c%c\n", grade, plus_minus);

    return 0;
}
