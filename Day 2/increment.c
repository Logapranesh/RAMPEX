#include <stdio.h>

int main() {
    int a = 2;
    int b = a++;
    int c = 9;
    int d = c--;

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);

    return 0;
}
