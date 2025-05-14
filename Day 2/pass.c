#include <stdio.h>
int main() {
    int marks[5];
    int pass = 1; 
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        if (marks[i] < 35) {
            pass = 0; 
        }
    }
    if (pass == 1) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }
    return 0;
}
