#include<stdio.h>
int main(){
    int n ;
    printf("enter the length of the square: ");
    scanf("%d" , &n);
    for (int i = 0; i < n ; i++){
        for (int j = 1 ; j <= n ; j++){
            printf("%c " , 65 + i);
        }
        printf("\n");
    }
    return 0;
}