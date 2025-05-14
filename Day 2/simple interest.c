#include <stdio.h>
int main() {
    float principal, rate, months, interest, time;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time (in months): ");
    scanf("%f", &months);
    time = months / 12.0;
    interest = (principal * rate * time) / 100;
    printf("Simple Interest = %.2f\n", interest);
    return 0;
}
