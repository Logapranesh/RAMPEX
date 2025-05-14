#include <stdio.h>
void swap(int *a, int *b) {
    int temp1, temp2;  
    temp1 = *a; 
    *a = temp2;  
    *b = temp1;  
}
int main() {
    int x = 5, y = 10;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}
