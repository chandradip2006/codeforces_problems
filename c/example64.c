//  reversing an array
#include<stdio.h>
 int main(){
    // // using an extra array
//     int n;
//     printf("enter the size of the array: ");
//     scanf("%d" , &n);
//     int arr1[n];
//     for (int i = 0 ; i < n ; i++){
//         int r;
//         printf("enter the number%d: " , i + 1);
//         scanf("%d" , &r);
//         arr1[i] = r;
//     }
//     printf("old array: ");
//     for (int i = 0 ; i < n ; i++){
//         printf("%d " , arr1[i]);
//     }
//     printf("\n");
//     int arr2[n];
//     for (int j = 0 ; j < n ; j++){
//         arr2[j] = arr1[n - j - 1];
//     }
//     printf("new array: ");
//     for (int i = 0 ; i < n ; i++){
//         printf("%d " , arr2[i]);
//     }

    // // without using an extra array
    int n;
    printf("enter the size of the array: ");
    scanf("%d" , &n);
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        int r;
        printf("enter the number%d: " , i + 1);
        scanf("%d" , &r);
        arr[i] = r;
    }
    printf("old array: ");
    for (int i = 0 ; i < n ; i++){
        printf("%d " , arr[i]);
    }
    printf("\n");
    int i = 0;
    int j = n - 1;
    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp ;
        i++;
        j--;
    }
    printf("new array: ");
    for (int i = 0 ; i < n ; i++){
        printf("%d " , arr[i]);
    }

    return 0;
}