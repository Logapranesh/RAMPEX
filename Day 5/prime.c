#include <stdio.h>
int main() {
    int num,i,isPrime;
    printf("Enter a number: ");
    scanf("%d",&num);
    for (i=2;i<=num;i++) {
        if (num%i==0){
            isPrime=0;
            printf("%d is not a prime number",num);
            break;
        }
        else{
            printf("%d is a prime number",num);
            break;
        }
    }
        return 0;
}