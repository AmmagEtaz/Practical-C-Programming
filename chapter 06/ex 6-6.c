/* Write a program that, given the number of hours an employee worked dat the hourly wage, computes
 * the employee's weekly pay. Count any hours over 40 as overtime at time and a half */

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char line[100], line2[100];
    int hours_worked, hourly_wage, overtime_wage, overtime_hours, weekly_pay;

    printf("Enter hours worked: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &hours_worked);

    printf("Enter hourly wage: ");
    fgets(line2, sizeof(line2), stdin);
    sscanf(line2, "%d", &hourly_wage);


    if (hours_worked > 40) {
        overtime_hours = hours_worked - 40;
        overtime_wage = hourly_wage * 1.5;
        hours_worked = 40;
        weekly_pay = (((hourly_wage * hours_worked) + (overtime_wage * overtime_hours)) / 7);
        printf("hours_worked: %d\n", hours_worked);
        printf("overtime hours: %d\n", overtime_hours);
        printf("weekly pay: %d\n", weekly_pay);

    } else {
        weekly_pay = ((hourly_wage * hours_worked) / 7);
        printf("Weekly pay: %d\n", weekly_pay);
    }



    return 0;
}
