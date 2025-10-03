// 1D array of characters
#include<stdio.h>
int main(){
    // null character "\0"
    char arr[] = {'c' , 'h' , 'a' , 'n' , 'd' , 'r' , 'a' , 'd' , 'i' , 'p' , '\0'};
    int l = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0 ; i < l ; i++){
        printf("%c" , arr[i]);
    }
    printf("\n");
    printf("%s" , arr);

    return 0;
}