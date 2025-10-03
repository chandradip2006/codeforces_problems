#include<stdio.h>
int main(){
    int arr[5] = {4 , 1, 3 , 7 , 2};  //  declaration of an array and initialization of the array
    // //int arr[5];  //declaration of an array
    // arr[0] = 4;
    // arr[1] = 1;
    // arr[2] = 3;   // initialization of the array
    // arr[3] = 7;
    // arr[4] = 2;
    printf("%d\n" , arr[0]);
    printf("%d\n" , arr[1]);
    printf("%d\n" , arr[2]);
    printf("%d\n" , arr[3]);
    printf("%d\n\n" , arr[4]);
    arr[1] = 10;
    printf("%d\n" , arr[0]);
    printf("%d\n" , arr[1]);
    printf("%d\n" , arr[2]);
    printf("%d\n" , arr[3]);
    printf("%d\n" , arr[4]);
    return 0;
}