#include<stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    int z = n-1;
    int arr1[z];
    for(int i = 0 ; i < z ; i++){
        arr1[i]= arr[i];
    }
    int ld1 , ld2 ;
    for(int i = z-1 ; i >= 0 ; i--){
        
        int r = 0;
        while(arr1[i] != 0 && arr1[i-1] != 0){
            ld1 = arr1[i] % 10;
            ld2 = arr1[i-1] % 10 ;
            int s = ld1 + ld2;
            if(s >= 10){
                s = s % 10;
            }
            else continue;
            r = r * 10 + s;
            arr1[i] = arr1[i] / 10;
            arr1[i-1] = arr1[i-1] / 10 ;
        }
        arr1[i-1] = r;
    }
    // printf("sum: %d" , arr1[0]);
    // return 0;
}