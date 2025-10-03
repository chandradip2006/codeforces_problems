// second largest element
#include<stdio.h>
int main(){
    int arr[] = {4 , 1 , 2 , 2 , 5 , 6 , 6 , 8 , 9 , 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int z1 = arr[0];
    for (int i = 0 ; i < n ; i++){
        if (z1 <= arr[i]){
            z1 = arr[i];
        }
        else continue;
    }
    int z2 = arr[0];
    for (int j = 0 ; j < n ; j++){
        if (z2 <= arr[j] && z1 != arr[j]){
            z2 = arr[j];
        }
        else continue;
    }
    printf("the second largest elemtnt in the given array is: %d" , z2);
    return 0;
}