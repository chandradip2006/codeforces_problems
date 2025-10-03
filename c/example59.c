//  change(modify) of array
#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array: ");
    scanf("%d" , &n);
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        int r;
        printf("enter the number%d: " , i + 1 );
        scanf("%d" , &r);
        arr[i] = r;
    }
    for (int j = 0 ; j < n ; j++){
        printf("%d " , arr[j]);
    }
    for (int k = 0 ; k < n ; k++){
        if (k % 2 == 0){
            arr[k] = arr[k] + 10;
        }
        else{
            arr[k] = arr[k] * 2;
        }
    }
    printf("\n");
    for (int j = 0 ; j < n ; j++){
        printf("%d " , arr[j]);
    }
    return 0;
}