#include <stdio.h>
int main(){
    int n;
    printf("Enter the total elements: ");
    scanf("%d",&n);
    int a[n],res[n];
     printf("Enter %d elements:",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        if(i==0)
            res[i]=a[i]*a[i+1];
        else if(i==n-1)
            res[i]=a[i]*a[i-1];
        else
            res[i]=a[i-1]*a[i+1];
    }
    printf("The multiplication of previous and next elements are: ");
    for(int i=0;i<n;i++)
        printf("%d ",res[i]);
    return 0;
}


