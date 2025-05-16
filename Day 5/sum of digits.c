#include <stdio.h>
int main(){
    int i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&i);
    while(i!=0) {
        sum+=i%10;
        i/=10;
    }
    printf("Sum of digits = %d\n",sum);
    return 0;
}