#include<stdio.h>
int abs(int x){
    if(x>=0){
        return x;
    }
    else return (-1)*x;
}
int main(){
    int n;
    scanf("%d " , &n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    int z= n-1;
    while(z>=1){
        for(int i=0;i<z;i++){
            for(int j=0;j<z;j++){
                arr[i][j]=abs(arr[i][j]-arr[i+1][j+1]);
            }
        }
        z--;
    }
    printf("%d" , arr[0][0]);
}