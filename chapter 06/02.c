/************************************************************************************************
A professor generates letter grades using Table 6-3. Given a numberic grade, print the letter 
*************************************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char line[100];
    char grade;
    int percentage_right;

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

    printf("The grade is %c\n", grade);

    return 0;
}
