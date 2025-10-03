#include<stdio.h>
int main(){
    int n;
    printf("enter the no of rows: ");
    scanf("%d" , &n);
    for (int i = 1 ; i <= (2 * n - 1) ; i++){
        printf("*");
    }
    printf("\n");
    for (int i = 1 ; i <= n - 1 ; i++){
        for (int j = 0 ; j < (n - i) ; j++){
            printf("*");
        }
        for (int k = 1 ; k <= (2 * i - 1) ; k++){
            printf(" ");
        }
        for (int l = 0 ; l < (n - i) ; l++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}