#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array: ");
    scanf("%d" , &n);
    int arr1[n];
    printf("enter the elements: ");
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr1[i]);
    }
    int arr2[n];
    int j = 0;
    for(int i = 0 ; i < n-1 ; i++){
        if(arr1[i] >= 0){
            if((arr1[i+1]>=0) && (j < n)){
                arr2[j] = arr1[i];
                j++;
            }
            else if((arr1[i+1] < 0) && (j < n)){
                if(arr1[i+1]*(-1) <= arr1[i]){
                    arr2[j] = arr1[i];
                    j++;
                }
                else continue;
            }
        }
        else {
            if((arr1[i+1]>=0) && (j < n)){
                if(arr1[i+1] > arr1[i]*(-1)){
                    arr2[j] = arr1[i];
                }
                else continue;
            }
            else if((arr1[i+1]<0) && (j < n)){
                if(arr1[i] > arr1[i+1]){
                    arr2[0] = arr1[i];
                }
                else{
                    arr2[0] = arr1[i+1];
                }
            }
        }
    }
    int l = sizeof(arr2)/sizeof(arr2[0]);
    if(arr1[n-1]>=0){
        arr2[l] = arr1[n-1];
        for(int i = 0 ; i <= l ; i++){
            printf("%d " , arr2[i]);
        }
    }
    else {
        for(int i = 0 ; i < l ; i++){
            printf("%d " , arr2[i]);
        }
    }
}
    
    
