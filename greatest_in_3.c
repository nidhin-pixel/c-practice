//using function greatest between 3 
#include <stdio.h>

int greatest(int num1, int num2, int num3)
{
    if(num1 > num2)
    {
        if(num1 > num3)
            return num1;
        else
            return num3;
    }
    else
    {
        if(num2 > num3)
            return num2;
        else
            return num3;
    }
}

int main() 
{
    int n1, n2, n3;
    printf("Enter three numbers:");
    scanf("%d %d %d", &n1, &n2, &n3);

    int result = greatest(n1, n2, n3);
    printf("Greatest number is: %d", result);

    return 0;
}