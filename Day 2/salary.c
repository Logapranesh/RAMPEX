#include <stdio.h>
int main() {
    float basic, hra, da, gross_salary;
    printf("Enter the basic salary: ");
    scanf("%f", &basic);
    hra = basic * 0.20;
    da = basic * 0.15;
    gross_salary = basic + hra + da;
    printf("Gross Salary = %.2f\n", gross_salary);
    return 0;
}
