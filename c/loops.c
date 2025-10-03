#include<stdio.h>
int main(){
    // int n;
    // printf("enter the number: ");
    // scanf("%d" , &n);
    // for(int i = 0; i < n ; i++){
    //     printf("hello world\n");
    // }

    int x ;
    printf("enter a number: ");
    scanf("%d" , &x);
    for (int i = 1 ; i <= x ; i++) {
        printf("%d\n" , i);
    }

    // int x ;
    // printf("enter a number: ");
    // scanf("%d" , &x);
    // for (int i = 2 ; i <= x ; i += 2) {
    //     printf("%d\n" , i);
    // }

    // // OR
    // int x ;
    // printf("enter a number: ");
    // scanf("%d" , &x);
    // for (int i = 1 ; i <= x ; i++){
    //     if (i % 2 == 0) printf("%d\n" , i);
    //     else continue;
    // }

    // int x ;
    // printf("enter a number: ");
    // scanf("%d" , &x);
    // for (int i = 1 ; i <= x ; i += 2) {
    //     printf("%d\n" , i);
    // }

    // int n;
    // printf("enter the number of which the table is written: ");
    // scanf("%d" , &n);
    // for (int i=1 ; i <= 10 ; i++) {
    //     printf("%d" , i);
    //     printf(" : ");
    //     printf("%d\n" , n * i);
    // }

    // // OR
    // int n;
    // printf("enter the number of which the table is written: ");
    // scanf("%d" , &n);
    // for (int i=n ; i <= 10*n ; i += n) {
    //     printf("%d" , i / n);
    //     printf(" : ");
    //     printf("%d\n" , i);
    // }


    return 0;
}