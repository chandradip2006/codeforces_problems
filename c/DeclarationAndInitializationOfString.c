#include<stdio.h>
int main(){
    char arr[] = "chandradip";
    int l = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0 ; i < l ; i++){
        printf("%c" , arr[i]);
    }
    printf("\n");
    printf("%d" , l);   // extra one because of null character at the end of the string by default
    printf("\n");
    printf("%s" , arr);
    return 0;
}