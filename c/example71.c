// reversing a string
#include<stdio.h>
int main(){
    char str[11];
    printf("enter your name: ");
    scanf("%s" , str);
    int l = sizeof(str) / sizeof(str[0]) ;
    char reverse_str[l];
    for (int i = 0 ; i < l - 1 ; i++){
        reverse_str[i] = str[l - i - 2];
    }
    printf("your reversed name is: %s" , reverse_str);

    return 0;
}