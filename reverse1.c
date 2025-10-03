#include<stdio.h>
#include<string.h>
long long int reverse(long long int x) {
        int z=0;
        if(x<0){
            z=1;
            x=x*(-1);
        }
        long long int r=0;
        while(x>0){
            r=r*10+(x%10);
            x=x/10;
        }
        if(z==1){
            return (-1)*r;
        }
        else return r;
    }
int main(){
    long long x;
    scanf("%lld" , &x);
    printf("%lld" , reverse(x));
}