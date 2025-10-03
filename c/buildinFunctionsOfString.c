#include<stdio.h>
#include<string.h>
int main(){
    // // size of string
    // char str[] = "chandradip";
    // int l = strlen(str);  // it gives the length of the string except the last null character by default
    // printf("%d" , l);

    // deep copy
    char str[] = "raghav";
    char ptr[7];
    strcpy(ptr , str);  // deep copy
    printf("%s\n" , str);
    printf("%s\n" , ptr);
    str[0] = 'm';
    printf("%s\n" , str);
    printf("%s\n" , ptr);
    return 0;
}
