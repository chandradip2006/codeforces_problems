#include<stdio.h>
int main(){
    char str[] = "raghav";
    char* ptr = str;  // shallow copy
    printf("%s\n" , str);
    printf("%s\n" , ptr);
    str[0] = 'm';
    printf("%s\n" , str);
    printf("%s\n" , ptr);
    return 0;
}