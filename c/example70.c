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
    for(int i = 0 ; i < r ; i++){
        for (int j = 0 ; j < c ; j++){
            printf("%d " , arr[i][j]);
        }
        printf("\n");
    }
    // sum of all the elements
    int z = 0;
    for (int i = 0 ; i < r ; i++){
        for (int j = 0 ; j < c ; j++){
            z += arr[i][j];
        }
    }
    printf("the sum of all the elements of the array is: %d\n" , z);
    // product of all the elements
    int p = 1;
    for (int i = 0 ; i < r ; i++){
        for (int j = 0 ; j < c ; j++){
            p *= arr[i][j];
        }
    }
    printf("the product of all the elements of the array is: %d\n" , p);


    return 0;
}