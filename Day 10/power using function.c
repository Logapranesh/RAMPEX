#include <stdio.h>
int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    return base * power(base, exponent - 1);
}
int main() {
    int x, y, result;
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (y): ");
    scanf("%d", &y);
    result = power(x, y);
    printf("%d^%d = %d\n", x, y, result);
    return 0;
}