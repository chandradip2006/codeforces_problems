#include<stdio.h>
void change(int x[] , int n){
    printf("%d\n" , n);
    x[2] = 90;
}
int main(){
    int arr[] = {5 , 2 , 7 , 8 , 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n" , n);
    printf("%d\n" , arr[2]);
    change(arr , n);
    printf("%d\n" , arr[2]);
    return 0;
}