#include <stdio.h>
#include <string.h>

int main()
{
    char celsius_input[5];
    float celsius, fahrenheit;

    printf("Enter Centigrade: ");

    fgets(celsius_input, sizeof(celsius_input), stdin);
    sscanf(celsius_input, "%f", &celsius);

    fahrenheit = (9.0 / 5.0) * celsius + 32;
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
