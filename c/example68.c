// adding two square matrices
#include<stdio.h>
int main(){
    int n;
    printf("enter the order of the square matrices: ");
    scanf("%d" , &n);
    int arr1[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            int r;
            printf("enter the number: ");
            scanf("%d" , &r);
            arr1[i][j] = r;
        }
    }
    printf("array1: \n");
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            printf("%d " , arr1[i][j]);
        }
        printf("\n");
    }
    int arr2[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            int r;
            printf("enter the number: ");
            scanf("%d" , &r);
            arr2[i][j] = r;
        }
    }
    printf("array2: \n");
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            printf("%d " , arr2[i][j]);
        }
        printf("\n");
    }
    printf("sum of arrays: \n");
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            printf("%d " , arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}