#include<stdio.h>

int main() {
    int input, even = 0, odd = 0;
    printf("How many numbers: ");
    scanf("%d", &input);
    int arr[input];
    printf("Enter the numbers:\n");
    for(int i = 0; i < input; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Even Numbers: ");
    for(int i = 0; i < input; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            even++;
        }
    }
    printf("\nOdd Numbers: ");
    for(int i = 0; i < input; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
            odd++;
        }
    }
    return 0;
}

