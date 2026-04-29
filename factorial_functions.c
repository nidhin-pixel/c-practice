//factorial
#include <stdio.h>
int fact(int n)
{
    int i;
    int res=1;
    for(i=1;i<=n;i++)
    {
        res=res*i;
    }
    return res;
}
int main() 
{
    int n;
    printf("Enter any number=");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n));
    return 0;
}
