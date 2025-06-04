#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n')
        len++;

    i = 0;
    j = len - 1;

    while (i < j) {
        int isAlphaNumI = (str[i] >= 'a' && str[i] <= 'z') ||
                          (str[i] >= 'A' && str[i] <= 'Z') ||
                          (str[i] >= '0' && str[i] <= '9');

        int isAlphaNumJ = (str[j] >= 'a' && str[j] <= 'z') ||
                          (str[j] >= 'A' && str[j] <= 'Z') ||
                          (str[j] >= '0' && str[j] <= '9');

        if (!isAlphaNumI)
            i++;
        else if (!isAlphaNumJ)
            j--;
        else {
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            i++;
            j--;
        }
    }

    str[len] = '\0';
    printf("%s\n", str);

    return 0;
}
