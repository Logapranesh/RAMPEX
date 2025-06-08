#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("The given Number from right to left is:");
    while(n){
        printf("%d",n%10);
        n/=10;
    }
    printf("\n");
    return 0;
}
