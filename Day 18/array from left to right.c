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
    for(int i=0;i<input;i++){
        if(i > 0) {
            printf(" ");
        }
    printf("%d",arr[i]);
    }
    return 0;
}