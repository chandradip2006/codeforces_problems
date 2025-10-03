#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d" , &n , &m);
    int arr1[n],arr2[m];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr1[i]);
    }
    for(int i = 0 ; i < m ; i++){
        scanf("%d" , &arr2[i]);
    }
    int arr3[m+n];
    int i = 0 , j = 0 , k = 0;
    if(m>=n){
        while(i<n&&j<m){
            if(arr1[i]<=arr2[j]){
                arr3[k]=arr1[i];
                i++;
                k++;
            }
            else{
                arr3[k]=arr2[j];
                j++;
                k++;
            }
        }
        if(i<n&&j>m-1){
            for(int l = k ; l < m+n;l++){
                arr3[l]=arr1[i];
                i++;
            }
        }
        else if(i>n-1&&j<m){
            for(int l = k ; l < m+n;l++){
                arr3[l]=arr2[j];
                j++;
            }
        }
    }
    else{
        while(j<m){
            if(arr1[i]<=arr2[j]){
                arr3[k]=arr1[i];
                i++;
                k++;
            }
            else{
                arr3[k]=arr2[j];
                j++;
                k++;
            }
        }
        if(i<n&&j>m-1){
            for(int l = k ; l < m+n;l++){
                arr3[l]=arr1[i];
                i++;
            }
        }
        else if(i>n-1&&j<m){
            for(int l = k ; l < m+n;l++){
                arr3[l]=arr2[j];
                j++;
            }
        }
    }
    for(int r = 0 ; r < m+n ; r++){
        printf("%d " , arr3[r]);
    }
}