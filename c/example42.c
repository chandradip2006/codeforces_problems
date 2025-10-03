#include<stdio.h>
int main(){
    int n;
    printf("enter the odd no. of rows: ");
    scanf("%d" , &n);
    int z = n / 2;
    for (int i = 1 ; i <= z ; i++){
        for (int j = 1 ; j <= (z - i + 1) ; j++){
            printf(" ");
        }
        for (int k = 1 ; k <= (2 * i - 1) ; k++){
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1 ; i <= (2 * z + 1) ; i++){
        printf("*");
    }
    printf("\n");
    for (int i = 1 ; i <= z ; i++){
        for (int j = 1 ; j <= i ; j++){
            printf(" ");
        }
        for (int k = 1 ; k <= (2 * (z - i) + 1) ; k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}