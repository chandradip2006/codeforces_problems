#include<stdio.h>
#include<stdbool.h>
void swap(int* x , int* y){
    int temp = *x;
    *x=*y;
    *y=temp;
}
void sort(int arr[], int a , int b){
    bool flag;
    for(int i=a;i<b;i++){
        flag=false;
        for(int j=a ; j<b-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                flag=true;
            }
        }
        if(!flag){
            break;
        }
    }
}
int check(int arr[],int a , int b , int k){
    sort(arr,a,b);
    int count=1;
    for(int i=a;i<b;i++){
        if(arr[i]!=arr[i+1]){
            count++;
        }
    }
    if(count<k){
        return 0;
    }
    else if(count==k){
        return 1;
    }
    else{
        return -1;
    }
}
int main(){
    int n , k;
    scanf("%d %d " , &n , &k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d" , &arr[i]);
    }
    int count1=0;
    int p=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            p=j-i+1;
            int z[p];
            for(int l=0;l<p;l++){
                z[l]=arr[i+l];
            }
            if(check(z,0 , j-i,k)==0){
                continue;
            }
            else if(check(z,0 , j-i,k)==1){
                count1++;
            }
            else{
                break;
            }
            // for(int l=0;l<p;l++){
            //     printf("%d " , z[l]);
            // }
            // printf("\n");
        }
    }
    printf("%d" , count1);
}