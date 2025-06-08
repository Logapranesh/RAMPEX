#include <stdio.h>
int main() {
    int num,temp,n,sum=0,fact;
    printf("Enter number: ");
    scanf("%d",&num);
    temp=num;
    while(num){
        n=num%10;
        fact=1;
        for(int i=1;i<=n;i++)
            fact*=i;
        sum+=fact;
        num/=10;
    }
    if(sum==temp)
        printf("%d is a Strong Number\n",temp);
    else
        printf("Not a Strong Number\n");
    return 0;
}