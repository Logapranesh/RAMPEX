#include <stdio.h>
int main() {
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);
    printf("age <80: %d\n", age <80);
    printf("age >80: %d\n", age >80);
    return 0;
}
