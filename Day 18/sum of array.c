#include<stdio.h>
int main() {
    int input, sum = 0;
    printf("How many numbers: ");
    scanf("%d", &input);
    int arr[input];
    printf("Enter the numbers:\n");
    for(int i = 0; i < input; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }
    printf("Output: %d\n", sum);
    return 0;
}
