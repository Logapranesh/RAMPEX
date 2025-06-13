#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int arr[n],prefix[n],suffix[n],result[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    prefix[0]=1;
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]*arr[i-1];
    }
    suffix[n-1]=1;
    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]*arr[i+1];
    }
    for(int i=0;i<n;i++){
        result[i]=prefix[i]*suffix[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",result[i]);
    }
    return 0;
}