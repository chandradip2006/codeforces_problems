#include<stdio.h>
long long int GCD (int a , int b){
    if(a==0){
        return b;
    }
    else {
        return GCD(b%a,a);
    }
}
int main(){
    int t;
    scanf("%d " , &t);
    while(t--){
        long long int a , b;
        scanf("%lld %lld" , &a , &b);
        long long z = (a*b)/GCD(a , b);
        if(z==b){
            printf("%lld\n" , 2*b);
        }
        // else printf("%lld\n" , z);
    }
}