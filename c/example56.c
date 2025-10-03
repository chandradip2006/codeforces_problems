// maximum of the elements
#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array: ");
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        int r;
        printf("enter the number%d: " , i + 1);
        scanf("%d" , &r);
        arr[i] = r;
    }
    int z = arr[0];
    for (int i = 0 ; i < n ; i++){
        if (z <= arr[i]){
            z = arr[i];
            continue;
        }
        else continue;
    }
    printf("the maximum value is: %d" , z);
    return 0;
}