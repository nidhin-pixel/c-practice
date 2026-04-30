#include <stdio.h>
int reverse_of_string(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    char rev[length + 1];
    for (int i = 0; i < length; i++) {
        rev[i] = str[length - i - 1];
    }
    rev[length] = '\0';
    printf("Reverse of the string is: %s\n", rev);
    return 0;
}
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    reverse_of_string(str);
    return 0;
}