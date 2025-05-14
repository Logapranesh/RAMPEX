#include <stdio.h>

int main() {
    int age;
    float salary;
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your salary: ");
    scanf("%f", &salary);
    printf("\nName: %s", name);
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);
    return 0;
}
