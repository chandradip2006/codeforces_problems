// sum of elements of the array
#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array: ");
    scanf("%d" , &n);
    int arr[n];
    int z = 0;
    for (int i = 0 ; i < n ; i++){
        int r;
        printf("enter the number%d: " , i + 1);
        scanf("%d" , &r);
        arr[i] = r;
        z += arr[i];

    }
    for (int j = 0 ; j < n ; j++){
        printf("%d " , arr[j]);
    }
    printf("\nthe sum of the elements of the array is: %d" , z);
    return 0;
}