#include <stdio.h>

int main() {
    int marks[5], total = 0;
    float average;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    average = total / 5.0;
    if (average >= 90) {
        printf("Grade: A\n");
    } else if (average >= 80) {
        printf("Grade: B\n");
    } else if (average >= 70) {
        printf("Grade: C\n");
    } else if (average >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
