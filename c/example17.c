// factorials of first n natural numbers
#include<stdio.h>
int main(){
    // int n;
    // printf("enter a natural number: ");
    // scanf("%d" , &n);
    // int z = 1;
    // for (int i = 1 ; i <= n; i++) {
    //     for (int j = 1; j <= i ; j++){
    //         z *= j;
    //     }
    //     printf("%d\n" , z);
    //     z = 1;
    // }

    // OR
    int n;
    printf("enter a natural number: ");
    scanf("%d" , &n);
    int z = 1;
    for (int i = 1 ; i <= n; i++) {
        z *= i;
        printf("%d\n" , z);
    }
    return 0;
}