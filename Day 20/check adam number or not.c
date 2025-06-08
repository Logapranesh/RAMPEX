#include <stdio.h>
int reverse(int n) {
    int r=0;
    while(n){
        r=r*10+n%10;
        n/=10;
    }
    return r;
}
int main(){
    int num,rev,s1,s2;
    printf("Enter number: ");
    scanf("%d",&num);
    rev=reverse(num);
    s1=num*num;
    s2=reverse(rev*rev);
    if(s1==s2)
        printf("Adam Number\n");
    else
        printf("Not an Adam Number\n");
    return 0;
}