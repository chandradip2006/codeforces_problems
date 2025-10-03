#include<stdio.h>
int main(){
    int n;
    printf("enter the no of elements: ");
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    for(int i = 0 ; i <n-1; i++){
        int z = arr[i+1];
        for(int j = i+1 ; j < n ; j++){
            if(arr[j]>= z){
                z = arr[j];
            }
        }
        arr[i] = z;
    }
    arr[n-1] = -1;
    for(int k = 0 ; k < n ; k++){
        printf("%d ", arr[k]);
    }
}