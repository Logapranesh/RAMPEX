#include <stdio.h>
int main() {
    char str[100];
    printf("enter a string:");
    scanf("%s",&str);
    int len=0;
    while (str[len]){
        len++;
    }
    for (int i = len - 1; i >= 0; i--){
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

