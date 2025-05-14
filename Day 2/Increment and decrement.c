#include <stdio.h>

int main() {
    int a = 5, b = 10;
    printf("Initial values: a = %d, b = %d\n", a, b);
    printf("Using ++a: %d\n", ++a);
    printf("Using a++: %d\n", a++);
    printf("After a++: %d\n", a);
    printf("Using --b: %d\n", --b);
    printf("Using b--: %d\n", b--);
    printf("After b--: %d\n", b);
    return 0;
}
