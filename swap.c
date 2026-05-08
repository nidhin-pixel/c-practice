/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 10, b = 20;
    int temp;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    temp = a;
    a = b;
    b = temp;
    printf("a = %d\n", a);
    printf("b = %d", b);
    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a = 10.5, b = 20.6;
    float temp;
    printf("Welcome to Swap Program\n");
    printf("Before swapping:\n");
    printf("a = %.1lf\n", a);
    printf("b = %.1lf\n", b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping:\n");
    printf("a = %.1lf\n", a);
    printf("b = %.1lf", b);
    return 0;
}