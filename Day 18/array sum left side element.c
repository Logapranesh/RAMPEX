#include<stdio.h>
int main(){
    int input,sum=0;
    printf("How many number:");
    scanf("%d",&input);
    int arr[input];
    printf("Enter the numbers:\n");
    for(int i=0;i<input;i++){
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<input;i++){
        printf("%d",sum);
        sum+=arr[i];
    }
    return 0;
}