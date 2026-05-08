// #include <stdio.h>
// int main() {
//     int x = 10;
//     int *p = &x;

//     printf("Value of X = %d\n", x);
//     printf("Address of X = %p\n", (void *)&x);
//     printf("Pointer value = %d\n", *p);
//     printf("Find = %d\n", *(&x));
//     return 0;
// }
#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;
    printf("Value of X =%d\n",x);
    printf("Address of X =%d\n",&x);
    printf("Pointer value = %d\n", *p);
    printf("Find=%d",*(&x));
    return 0;
}
