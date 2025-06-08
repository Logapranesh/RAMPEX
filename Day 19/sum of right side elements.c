#include <stdio.h>
int main() {
    int n,sum=0,t;
    printf("Enter the total elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements:",n);
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    for(int i=n-1;i>=0;i--) {
         t=a[i];
        a[i]=sum;
         sum+=t;
     }
    printf("The elements are: ");
    for(int i=0;i<n;i++){
     printf("%d ",a[i]);
    }
}

