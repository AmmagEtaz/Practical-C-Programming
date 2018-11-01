/* Write a program to find the square of the distance between two points. (For a more advanced problem,
 * find the actual distance. This problem involves using the standard function sqrt. Use your help system
 * to find out more about how to use this function.) */

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char line[100];
    float first_point_x, first_point_y, second_point_x, second_point_y,
          x_points, y_points, distance, square_root;

    printf("Enter x and y coordinates of the first point: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%f %f", &first_point_x, &first_point_y);
    printf("Enter x and y coordinates of the second point: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%f%f", &second_point_x, &second_point_y);

    x_points = second_point_x - first_point_x;
    y_points = second_point_y - first_point_y;
    distance = (x_points * x_points) + (y_points * y_points);
    square_root = sqrt(distance);
    printf("The square root of the distance between the\ntwo points (%.1f|%.1f) and (%.1f|%.1f) is %.2f\n",
            first_point_x, first_point_y, second_point_x, second_point_y, square_root);


    return 0;
}
