#include <stdio.h>
#include<stdbool.h>
int pow1(int a , int b){
    if(b==1){
        return a;
    }
    else return a*pow1(a,b-1);
}
int main(){
    int k;
    scanf("%d" , &k);
    int arr[k];
    for(int i=1;i<pow1(2,k);i++){
        for(int j=0;j<k;j++){
            arr[j]=0;
        }
        int count=k-1;
        int t=i;
        while(t>0){
            arr[count]=t%2;
            t=t/2;
            count--;
        }
        bool flag = true;
        for(int l=0;l<k-1;l++){
            if(arr[l]==0&&arr[l+1]==0){
               flag=false; 
            }
        }
        if(flag){
            for(int p=0;p<k;p++){
                printf("%d" , arr[p]);
            }
            printf("\n");
        }
    }
    
    return 0;
}