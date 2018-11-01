/*Write a program to calculate the volume of a sphere. 4/3*r^3  */

#include <stdio.h>
#include <string.h>

#define PI 3.1416

int main()
{
    char radius_input[40];
    float radius, volume;

    printf("\nEnter radius of the sphere: ");
    fgets(radius_input, sizeof(radius_input), stdin);
    sscanf(radius_input, "%f", &radius);


    volume = (4.00 / 3.00 * PI) * (radius * radius * radius);
    printf("The volume of a sphere with a radius of %.2f is equal to %.2f\n\n", radius, volume);

    return 0;
}
