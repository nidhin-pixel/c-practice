#include <stdio.h>
int reverseNumber(int x) 
{
    int reversed = 0;
    while (x > 0) {
        int digit = x % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Append the digit to the reversed number
        x /= 10; // Remove the last digit
    }
    return reversed; // Return the reversed number
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int reversedNumber = reverseNumber(number);
    printf("The reverse of %d is %d.\n", number, reversedNumber);
    
    return 0;
}