#include<stdio.h>
int main(){
    int n;
    printf("enter a natural number: ");
    scanf("%d" , &n);
    int arr[n];
    for (int i = 1 ; i <= n ; i++){
        arr[i - 1] = i * i;
    }
    for (int j = 0 ; j < n ; j++){
        printf("%d " , arr[j]);
    }
    return 0;
}