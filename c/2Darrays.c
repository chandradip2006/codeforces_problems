#include<stdio.h>
int main(){
    int arr1[4][2] = {{1234,56} , {1256,43} , {1434,32} , {1312,96}}; // works
    int arr2[4][2] = {1234,56 , 1256,43 , 1434,32 , 1312,96};  //works
    int arr3[2][3] = {12,34,56,78,91,23}; //works
    int arr4[][3] = {12,34,56,78,91,23}; // works
    // int arr5[2][] = {12,34,56,78,91,23}; //shows error
    return 0;
}