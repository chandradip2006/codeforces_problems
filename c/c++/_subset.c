#include<stdio.h>

void subarr(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        for(int i = 0 ; i < n ; i++){
            printf("%d " , arr[i]);
        }
        printf("\n");
        int arr1[n-1];
        for(int j = 0 ; j < n ; j++){
            if(i != j){
                for(int k = 0 ; k < n-1 ; k++){
                    arr1[k] = arr[i];
                }
            }
            subarr(arr1 , n-1);
        }
    }
}
int main(){
    int n;
    printf("enter the no of elements: ");
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &arr[i]);
    }
    subarr(arr , n);
}