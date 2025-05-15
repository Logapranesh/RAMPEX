#include <stdio.h>
int main() {
    int n,r=0,t;
    printf("Enter a number:");
    scanf("%d",&n);
    t=n;
    while(n) 
    r=r*10+ n%10,n/=10;
    if(t==r){
    printf("Palindrome");
    }
    else{
     printf("Not a Palindrome");
    }
    return 0;
}
