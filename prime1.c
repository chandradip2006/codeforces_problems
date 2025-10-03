#include<stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    int prime=1;
    for(int i=2 ; i<91;i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    if(prime){
        printf("prime");
    }
    else printf("not prime");
}