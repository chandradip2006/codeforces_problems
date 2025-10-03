#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("enter the no of elements: ");
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" ,&arr[i]);
    }
    bool flag;
    for(int i = 0 ; i < n ; i++){
        int arr1[n-1];
        int z = 0;
        for(int j = 0 ; j < n ; j++){
            if(i != j){
                arr1[z] = arr[j];
                z++;
            }
        }
        flag = false;
        for(int k = 0 ; k < n-2 ; k++){
            if(arr1[k] < arr1[k+1]){
                flag = true;
            }
            else {
                flag = false;
                break;
            }
        }
        if(flag == true){
            printf("true");
            break;
        }
        else continue;
    }
    if(flag == false ){
        printf("false");
    }
}