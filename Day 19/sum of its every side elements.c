#include <stdio.h>
int main(){
    int n,total=0;
    printf("Enter the total elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements:",n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        total+=a[i];
    }
    printf("The elements are: ");
    for(int i=0;i<n;i++) {
        printf("%d ",total-a[i]);
    }
    printf("\n");
    return 0;
}
