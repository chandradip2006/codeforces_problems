#include<stdio.h>
int main(){
    int n1;
    printf("enter the no elements of arr1: ");
    scanf("%d" , &n1);
    printf("\n");
    int arr1[n1];
    printf("arr1: ");
    for(int i =0 ; i < n1 ; i++){
        scanf("%d" , &arr1[i]);
    }
    printf("\n");
    int n2;
    printf("enter the no elements of arr2: ");
    scanf("%d" , &n2);
    printf("\n");
    int arr2[n2];
    printf("arr2: ");
    for(int i =0 ; i < n2 ; i++){
        scanf("%d" , &arr2[i]);
    }
    printf("\n");
    int n = n1 + n2;
    printf("new arr: ");
    int arr[n];
    for(int i = 0 ; i < n1 ; i++){
        arr[i] = arr1[i];
    }
    for(int j = 0 ; j < n2 ; j++){
        arr[j+n1] = arr2[j];
    }
    for(int k = 0 ; k < n ; k++){
        printf("%d " , arr[k]);
    }

}