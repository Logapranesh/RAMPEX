#include <stdio.h>
int main() {
  int n=8,fact=1,i;
  for(i=1;i<=n;i++){
      fact*=i;
  }
printf("Factorial of %d is %d",n,fact);
    return 0;
}
