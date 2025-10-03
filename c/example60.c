#include<stdio.h>
int main(){
    int x;
    printf("enter a given number: ");
    scanf("%d" , &x);
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
    int count = 0;
    for(int j = 0 ; j < n ; j++){
        if (arr[j] > x) {
            count++;
        }
        else continue;
    }
    printf("the no of elements greater than the given number %d is: %d" , x , count);
    return 0;
}