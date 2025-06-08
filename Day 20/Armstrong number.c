
#include <stdio.h>
int main(){
    int num,temp,n,sum=0;
    printf("Enter number: ");
    scanf("%d",&num);
    temp=num;
    while(num){
        n=num%10;
        sum+=n*n*n;
        num/=10;
    }
    if(sum==temp)
        printf("%d Armstrong Number\n",temp);
    else
        printf("Not an Armstrong Number\n");
    return 0;
}
