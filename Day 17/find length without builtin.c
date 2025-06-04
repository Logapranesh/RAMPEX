#include <stdio.h>

int main() {
    char str[100];
    int i = 0, len = 0, count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] != ' ') {
            len++;
        } else {
            if (len == 1)
                count++;
            len = 0;
        }
        i++;
    }

    if (len == 1)
        count++;

    printf("%d\n", count);

    return 0;
}
