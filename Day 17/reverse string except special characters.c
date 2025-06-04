#include <stdio.h>
int main() {
    char str[] = "t$%heory H%andled$#";
    int l = 0, r;
    while (str[l]) l++;
    r = l - 1;
    while (l < r) {
        if (!((str[l] >= 'a' && str[l] <= 'z') || (str[l] >= 'A' && str[l] <= 'Z')))
            l++;
        else if (!((str[r] >= 'a' && str[r] <= 'z') || (str[r] >= 'A' && str[r] <= 'Z')))
            r--;
        else {
            char temp=str[l];
            str[l]=str[r];
            str[r]=temp;
            l++;
            r--;
        }
    }
    printf("Output: %s\n", str);
    return 0;
}

