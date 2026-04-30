#include <stdio.h>
int reverseString(char str[])
{
    int length = 0;
    while (str[length] != '\0') {
        length++; // Calculate the length of the string
    }
    char reversed[length + 1]; // Create a new array to hold the reversed string
    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i]; // Fill the reversed array
    }
    reversed[length] = '\0'; // Null-terminate the reversed string
    printf("The reverse of \"%s\" is \"%s\".\n", str, reversed);
    return 0;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a string from the user
    
    // Remove the newline character if present
    int length = 0;
    while (str[length] != '\0') {
        if (str[length] == '\n') {
            str[length] = '\0'; // Replace newline with null terminator
            break;
        }
        length++;
    }
    reverseString(str); // Call the function to reverse the string
    return 0;
}