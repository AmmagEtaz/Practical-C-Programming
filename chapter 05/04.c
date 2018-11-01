/************************************************************************
Write a program that converts kilometers per hour to miles per hour.
miles = (kilometer * 0.6213712) 
*************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char kilometer_input[100];
    float kilometer, miles;

    printf("\nEnter kilometers: ");
    fgets(kilometer_input, sizeof(kilometer_input), stdin);
    sscanf(kilometer_input, "%f", &kilometer);

    miles = kilometer * 0.6213712;
    printf("%.2f kilometers per hour are equal to %.2f miles per hour\n", kilometer, miles);

    return 0;
}
