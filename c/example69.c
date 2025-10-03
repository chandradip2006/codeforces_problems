// maximum element of a given matrix
#include<stdio.h>
int main(){
    int r;
    printf("enter the no of rows of the matrix: ");
    scanf("%d" , &r);
    int c;
    printf("enter the no of columns of the matrix: ");
    scanf("%d" , &c);
    int arr[r][c];
    for (int i = 0 ; i < r ; i++){
        for (int j = 0 ; j < c ; j++){
            int n;
            printf("enter a number: ");
            scanf("%d" , &n);
            arr[i][j] = n;
        }
    }
    printf("\n");
    for (int i = 0 ; i < r ; i++){
        for (int j = 0 ; j < c ; j++){
            printf("%d " , arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int z = arr[0][0];
    for (int i = 0 ; i < r ; i++){
        for (int j = 0 ; j < c ; j++){
            if (z <= arr[i][j]){
                z = arr[i][j];
                continue;
            }
            else continue;
        }
    }
    printf("the maximum element of the given matrix is: %d\n" , z);
    //  minimum element of the matrix
    int p = arr[0][0];
    for (int i = 0 ; i < r ; i++){
        for (int j = 0 ; j < c ; j++){
            if (p >= arr[i][j]){
                p = arr[i][j];
                continue;
            }
            else continue;
        }
    }
    printf("the minimum element of the given matrix is: %d" , p);
    return 0;
}