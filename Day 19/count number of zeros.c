#include <stdio.h>
int main() {
    int n, z=0,o=0,x;
    printf("Enter the total Elements:");
    scanf("%d",&n);
     printf("Enter both 0's and 1's:");
    for(int i=0;i<n;i++) { 
        scanf("%d",&x);
        if(x==0)
         z++;
        else if(x==1) 
        o++;
    }
    printf("zc=%d oc=%d",z,o);
}

