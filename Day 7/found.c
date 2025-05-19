#include <stdio.h>
int main(){
    int arr[5];
    int target=60;
    int i,found=0;
    printf("Enter values:");
    for(i=0;i<5;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<5;i++){
        if(arr[i]==target){
            printf("Element found ");
            found=1;
        }
    }
    if(!found){
        printf("Element not found\n");
    }
    return 0;
}