#include <stdio.h>
int palindrome_of_number_factorial(int num) {
    int originalNum = num;
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    if (originalNum == rev) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is not a palindrome number.\n", originalNum);
    }
    return 0;
}
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    palindrome_of_number_factorial(number);
    return 0;
}