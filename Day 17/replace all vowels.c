#include <stdio.h>
int main() {
    char str[]="Replace all Vowels";
    for (int i=0;str[i];i++) {
        char ch=str[i];
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            str[i] = ' ';
    }
    printf("Result: %s\n",str);
    return 0;
}
