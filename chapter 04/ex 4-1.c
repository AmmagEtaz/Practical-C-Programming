/*Purpose: Write a program to print your name, *********
 *social security number, and date of birth            *
 *date: 08/08/2018                                     *
 *                                                     *
********************************************************/


#include <stdio.h>

int main()
{
    char name[100];
    int socialsecurity;
    char dateofbirth[100];
    printf("\n\nName: ", name);
    scanf("%s", name);
    printf("Social Security: ");
    scanf("%d", &socialsecurity);
    printf("Date of Birth: ", dateofbirth);
    scanf("%s", dateofbirth);

    printf("\n\n\nWelcome to our community! This is your data: \n");
    printf("\nName = %s", name);
    printf("\nSocial Security Number = %i", socialsecurity);
    printf("\nDate of birth = %s\n\n", dateofbirth);


    return(0);
}
