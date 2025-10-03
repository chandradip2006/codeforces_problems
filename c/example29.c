#include<stdio.h>
int main(){
    // int n;
    // printf("enter the no of rows: ");
    // scanf("%d" , &n);
    // for (int i = 1 ; i <= n ; i++){
    //     for (int j = 0 ; j <= (n - i) ; j++){
    //         printf("%d" , i);
    //     }
    //     printf("\n");
    // }

    int n;
    printf("enter the no of rows: ");
    scanf("%d" , &n);
    for (int i = 0 ; i < n ; i++){
        for (int j = 1 ; j <= (n - i) ; j++){
            printf("%c " , 65 + i);
        }
        printf("\n");
    }
    return 0;
}