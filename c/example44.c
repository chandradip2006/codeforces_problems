#include<stdio.h>
int main(){
    int n;
    printf("enter the no of rows: ");
    scanf("%d" , &n);
    int z = 2 * n - 1;
    for (int i = 0 ; i < z ; i++){
        printf("%c" , 65 + i);
    }
    printf("\n");
    for (int i = 1 ; i <= n - 1 ; i++){
        for (int j = 0 ; j < n - i ; j++){
            printf("%c" , 65 + j);
        }
        for (int k = 1 ; k <= (2 * i - 1) ; k++){
            printf(" ");
        }
        for (int l = n + i - 1 ; l <= (2 * n - 2) ; l++){
            printf("%c" , 65 + l);
        }
        printf("\n");
    }
    return 0;
}