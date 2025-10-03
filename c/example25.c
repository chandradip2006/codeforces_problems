#include<stdio.h>
int main(){
    // int n;
    // printf("enter the row number: ");
    // scanf("%d" , &n);
    // for (int i = 1 ; i <= n ; i++){
    //     for (int j = 0; j < i; j++){
    //         printf("%d " , i);
    //     }
    //     printf("\n");
    // }

    int n;
    printf("enter the row number: ");
    scanf("%d" , &n);
    for (int i = 0 ; i < n ; i++){
        for (int j = 0; j <= i; j++){
            printf("%c " , 65 + i);
        }
        printf("\n");
    }
    return 0;
}