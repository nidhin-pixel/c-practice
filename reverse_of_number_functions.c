#include <stdio.h>
int reverse(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int reversedNumber = reverse(number);
    printf("Reverse of %d is %d\n", number, reversedNumber);
    return 0;
}
