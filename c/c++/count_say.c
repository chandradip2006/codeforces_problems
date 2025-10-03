#include<stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
    int arr[n*n*n];
    int count=0;
    arr[count]=1;
    count++;
    int count1=1;
    int count2=0;
    for(int i=1;i<n;i++){
        int arr1[count*count];
        count1=1;
        for(int j=0;j<count-1;j++){
            if(arr[j]==arr[j+1]){
                count1++;
            }
            else{
                arr1[count2]=count1;
                count2++;
                arr1[count2]=arr[j];
                count2++;
                count1=1;
            }
        }
        arr1[count2]=count1;
        count2++;
        arr1[count2]=arr[count-1];
        count2++;
        for(int l=0;l<count2;l++){
                arr[l]=arr1[l];
        }
        count=count2;
        count2=0;
    }
    for(int i=0;i<count;i++){
        printf("%d" , arr[i]);
    }
}