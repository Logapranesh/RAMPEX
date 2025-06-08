#include <stdio.h>
int main() {
    int num,digit,count=0;
     printf("Enter number and digit: ");
    scanf("%d %d",&num,&digit);
    while(num){
        if (num%10==digit) 
        count++;
        num/=10;
    }
    printf("The number of occurrences of a digit is: %d\n", count);
    return 0;
}


