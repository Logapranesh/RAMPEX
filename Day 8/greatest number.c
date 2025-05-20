#include <stdio.h>

int great(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= c && b >= a) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int a = 3;
    int b = 5;
    int c = 2;

    int greatest = great(a, b, c);

    printf("%d is the greatest number\n", greatest);

    return 0;
}
