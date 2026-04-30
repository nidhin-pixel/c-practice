#include <stdio.h>
int isPalindrome(int x) {
    if (x < 0) {
        return 0; // Negative numbers are not palindromes
    }
    
    int original = x;
    int reversed = 0;
    
    while (x > 0) {
        int digit = x % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Append the digit to the reversed number
        x /= 10; // Remove the last digit
    }
    
    return original == reversed; // Check if the original number is equal to the reversed number
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
    
    return 0;
}