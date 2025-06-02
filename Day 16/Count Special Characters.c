#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] < '0' || str[i] > '9') &&
            (str[i] < 'A' || str[i] > 'Z') &&
            (str[i] < 'a' || str[i] > 'z')) {
            count++;
        }
    }

    printf("Output: %d\n", count);
    return 0;
}
