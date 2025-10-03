#include <stdio.h>

int main () {
    int n;
    scanf("%d " , &n);
    char ch;
    scanf("%c" , &ch);
    printf("%c" , (char)('A'+(((ch-'A')+n)%26)+32));
    return 0;
}