#include<stdio.h>
int main(){
    int n;
    printf("enter the odd no of rows: ");
    scanf("%d" , &n);
    int z = n / 2;
    for (int i = 1; i <= z ; i++) {
        for (int j = 1 ; j <= 2 * z ; j++){
            printf(" ");
        }
        printf("*\n");
    }
    for (int k = 1 ; k <= n; k++){
        printf("* ");
    }
    printf("\n");
    for (int i = 1; i <= z ; i++) {
        for (int j = 1 ; j <= 2 * z ; j++){
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}