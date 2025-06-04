#include<stdio.h>
int main(){
    int input;
    printf("How many number:");
    scanf("%d",&input);
    int arr[input];
    printf("Enter the numbers:\n");
    for(int i=0;i<input;i++){
    scanf("%d",&arr[i]);
    }
    for(int i=input-1;i>=0;i--){
        if(i<input-1) {
            printf(" ");
        }
    printf("%d",arr[i]);
    }
    return 0;
}