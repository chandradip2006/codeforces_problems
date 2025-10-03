#include <stdio.h>
#include<stdbool.h>
void sort(int arr[] , int a , int b){
    bool flag;
    for(int i=a;i<b-1;i++){
        flag=false;
        for(int j=a;j<b-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=true;
            }
        }
        if(!flag){
            break;
        }
    }
}
int main() {
    int m ;
    scanf("%d" , &m);
    int count=0;
    int a[m];
    for(int i=0;i<m;i++){
        scanf("%d" , &a[i]);
    }
    int n ;
    scanf("%d" , &n);
    int b[n];
    for(int i=0;i<n;i++){
        scanf("%d" , &b[i]);
    }
    int z= m+n;
    int arr[z];
    for(int i=0;i<m;i++){
        arr[count]=a[i];
        count++;
    }
    for(int i=0;i<n;i++){
        arr[count]=b[i];
        count++;
    }
    sort(arr,0,z);
    if(z%2==0){
        float med=(float)(arr[z/2-1]+arr[z/2])/2;
        printf("%.1f" , med);
    }
    else{
        printf("%.1f" , (float)arr[z/2]);
    }
    return 0;
}