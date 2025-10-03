#include<stdio.h>
void selectionSort(int arr[] , int a , int b){
    int z = arr[a],idx;
    for(int i = a ; i <=b;i++){
        if(arr[i]>=z){
            z = arr[i];
            idx = i;
        }
    }

    int temp = arr[a];
    arr[a]=arr[idx];
    arr[idx]=temp;
    a++;
    if(a>=b){
        return;
    }
    selectionSort(arr,a,b);
}
int main(){
    int n;
    scanf("%d" ,&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , arr+i);
    }
    selectionSort(arr,0,n-1);
    for(int i = 0 ; i < n ; i++){
        printf("%d ", arr[i]);
    }
}