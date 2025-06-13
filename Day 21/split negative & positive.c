#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n],result[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            result[index++]=arr[i];
        }
    }
    for(int i=0;i<n;i++) {
        if(arr[i]>=0){
            result[index++]=arr[i];
        }
    }
    printf("Output:");
    for (int i=0;i<n;i++) {
        printf("%d ",result[i]);
    }
    return 0;
}
