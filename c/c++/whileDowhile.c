#include<stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    int j = 1;
    // while(j <= n){
    //     printf("hello world\n");
    //     j++;
    // }
    do{
        printf("hello world\n");
        j++;
    } while(j <= n);
}