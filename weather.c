// Celsius to Fahrenheit
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Welcome to Weather Station\n");
    double celsius, fahrenheit;
    printf("Enter Celcious temperature=");
    scanf("%lf", &celsius);
    fahrenheit = celsius * 1.8 + 32;
    printf("Fahrenheit temperature= %.2lf\n", fahrenheit);
    return 0;
}
*/
// Fahrenheit to Celsius
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Welcome to Weather Station\n");
    double celsius, fahrenheit;
    printf("Enter Fahrenheit temperature=");
    scanf("%lf", &fahrenheit);
    celsius = (fahrenheit - 32) / 1.8;
    printf("Celsius temperature= %.2lf\n", celsius);
    return 0;
}