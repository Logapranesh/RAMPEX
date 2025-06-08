#include <stdio.h>
int main(){
    int n,x,count=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    x=a[n/2];
    for(int i=0;i<n;i++) {
        if(a[i]==x)
        count++;
    }
    if(count>n/2){
        printf("The majority element is : %d\n",x);
    }
    else{
        printf("No majority element\n");
    }
    return 0;
}
