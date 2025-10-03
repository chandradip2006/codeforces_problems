#include<stdio.h>
int main(){
    int n;
    printf("enter the no of elements: ");
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        int z = arr[i];
        for(int j = i ; j < n ; j++){
            if(arr[j]> z){
                z = arr[j];
            }
        }
        if(arr[i] == z){
            count++;
        }
    }
    int arr1[count];
    int x= 0;
    for(int i = 0 ; i < n ; i++){
        int z = arr[i];
        for(int j = i ; j < n ; j++){
            if(arr[j]>= z){
                z = arr[j];
            }
        }
        if(z == arr[i]){
            arr1[x] = z;
            x++;
        }
    }
    for(int i = 0 ; i < count ; i++){
        printf("%d " , arr1[i]);
    }

}