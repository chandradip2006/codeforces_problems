#include<stdio.h>
int main(){
    // int n;
    // printf("enter the size of the array: ");
    // scanf("%d" , &n);
    // int arr[n];
    // for (int i = 0 ; i < n ; i++){
    //     int r;
    //     printf("enter the number%d: " , i + 1);
    //     scanf("%d" , &r);
    //     arr[i] = r;
    // }
    // for (int j = 0 ; j < n ; j++){
    //     printf("%d " , arr[j]);
    // }

    // OR

    int n;
    printf("enter the size of the array: ");
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("enter the number%d: ");
        scanf("%d" , &arr[i]);
    }
    for(int j = 0 ; j < n ; j++){
        printf("%d " , arr[j]);
    }
    
    return 0;
}