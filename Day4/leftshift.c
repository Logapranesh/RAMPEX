#include <stdio.h>
int main() {
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("The result for left shift is %d\n", a<<2);
    printf("The result for right shift is %d\n", a>>2);
    return 0;
}