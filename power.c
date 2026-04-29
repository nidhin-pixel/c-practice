//Power
#include <stdio.h>
int main() 
{
    int a, b, pow = 1;
    printf("Enter number and power = ");
    scanf("%d %d", &a, &b);

    for(int i = 1; i <= b; i++)
    {
        pow = pow * a;   // FIXED LINE
    }

    printf("Power of %d is %d", a, pow);

    return 0;
}
