#include <stdio.h>
#include <string.h>
union Data {
    int i;
    float f;
    char str[20];
} data;

int main() {
    data.i = 10;
    printf("Integer value: %d\n", data.i);
    data.f = 3.14;
    printf("Float value: %f\n", data.f);
    strcpy(data.str, "Hello, Union!");
    printf("String value: %s\n", data.str);
    return 0;
}
