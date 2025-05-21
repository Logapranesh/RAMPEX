#include <stdio.h>
int countNumbers(int num) {
    int count=0;
    if (num==0)
        return 1;
    if (num<0)
        num=-num;
    while(num!=0) {
        num=num/10;
        count++;
    }
    return count;
}
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Number of digits:%d\n",countNumbers(n));
    return 0;
}
