#include<stdio.h>
int main(){
    int m , n;
    scanf("%d %d" , &m ,&n);
    int a[m],b[n];
    for(int i=0;i<m;i++){
        scanf("%d" , a+i);
    }
    for(int i=0;i<n;i++){
        scanf("%d" , b+i);
    }
    int z=m+n;
    int arr[z];
    int count=0;
    int i=0,j=0;
    while(z--){
        if(i<m){
            arr[count]=a[i];
            i++;
            count++;
        }
        else{
            if(j<n){
                arr[count]=b[j];
                j++;
                count++;
            }
        }
    }
    for(int i=0;i<count;i++){
        printf("%d " , arr[i]);
    }
}