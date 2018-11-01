/*******************************************************************************************************
Write a program to compute the area and perimemter of a rectangle with a width of
three inches and a height of five inches. What changes must be made to the program so that it works
for a rectangle with a width of 6.8 inches and a length of 2.3 inches? 
********************************************************************************************************/


#include <stdio.h>

int main()
{
    int height, width, area, perimeter;
    width = 3;
    height = 5;
    printf("Write a program to compute the area and perimemter of a rectangle with a \nwidth of three inches and a height of five inches\n\n\n");
    perimeter = 2 * (width + height);
    area = width * height;
    printf("Perimeter = %i", perimeter);
    printf("\nArea = %i", area);
    printf("\n\n\nWhat changes must be made to the program so that it works for a \nrectangle with a width of 6.8 inches and a length of 2.3 inches? ");
    printf("\n\n\Answer: we define width and height as float numbers, so we have that: \n\n");
    float height2, width2, area2, perimeter2;
    width2 = 6.8;
    height2 = 2.3;
    perimeter2 = 2 * (width2 + height2);
    area2 = width2 * height2;
    printf("\nPerimeter 2 = %.2f", perimeter2);
    printf("\nArea 2 = %.2f\n\n", area2);

    return(0);
}
