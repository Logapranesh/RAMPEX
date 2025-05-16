#include <stdio.h>
int main() {
    int n,r=0,t;
    printf("Enter a number: ");
    scanf("%d", &n);
    t=n;
    while(n){
        r=r*10+n%10;
        n/=10; 
    }
    if(t==r){
        printf("%d is a Palindrome",r);
    }else{
        printf("%d is Not a Palindrome",r);
    }
    return 0;
}
