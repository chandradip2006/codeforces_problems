#include<stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    int z=1;
    if(n==1||n==0){
        printf("neither prime nor composite");
    }
    else{
        for(int i=2;i<=(n/i);i++){
            if(n%i==0){
                z=0;
                break;
            }
        }
        if(z==1){
            printf("prime");
        }
        else printf("composite");
    }
}