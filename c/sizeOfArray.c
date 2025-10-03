#include<stdio.h>
int main(){
    int arr[] = {4 , 6 , 7 , 1 , 4 , 7 , 9 , 0 , 4 , 2 , 3 , 8 , 6 , 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("the size of the array is:%d" , size);
    return 0;
}