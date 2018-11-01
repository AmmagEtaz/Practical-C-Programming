/****************************************************************************************
Write a program that prints the periemter of a rectangle given its height and width.
perimeter = 2 * (width + height) 
*****************************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char width_input[100], height_input[100];
    int width, height, perimeter;

    printf("\nEnter width of the rectangle: ");
    fgets(width_input, sizeof(width_input), stdin);
    sscanf(width_input, "%d", &width);

    printf("Enter height of the rectangle: ");
    fgets(height_input, sizeof(height_input), stdin);
    sscanf(height_input, "%d", &height);

    perimeter = 2 * (width + height);
    printf("The perimeter of a rectangle with a width of %d and a height of %d is equal to %d\n\n",
           width, height, perimeter);

    return 0;
}
