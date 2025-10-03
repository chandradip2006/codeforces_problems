#include<stdio.h>
int main(){
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
    int z1 = 0;
    int z2 = 0;
    for (int i = 0 ; i < n ; i++){
        if (i % 2 == 0){
            z1 += arr[i];
        }
        else{
            z2 += arr[i];
        }
    }
    printf("the difference between the sum of even indices to the sum of odd indices is: %d" , z1 - z2);
    return 0;
}