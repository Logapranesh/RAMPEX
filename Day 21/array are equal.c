#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of element:");
    scanf("%d",&n);
    int A[n],B[n];
    printf("Enter the First element:");
    for(int i=0;i<n;i++){
       scanf("%d",&A[i]); 
    }
    printf("Enter second element:");
    for(int i=0;i<n;i++){
       scanf("%d",&B[i]); 
    }
    int equal=1;
    for (int i=0;i<n;i++) {
        if(A[i]!=B[i]){
            equal=0;
            break;
        }
    }
    if(equal){
        printf("array are equal \n");
    }
    else{
        printf("array are not equal \n");
    }
    return 0;
}