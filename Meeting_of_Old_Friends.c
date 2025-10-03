#include<stdio.h>
int main(){
    long long int l1,r1,l2,r2,k;
    scanf("%lld %lld %lld %lld %lld" , &l1,&r1,&l2,&r2,&k);
    if(r1<l2||r2<l1){
        printf("0");
    }
    else{
        if(l1<=l2&&r1>=l2){
            if(r2>=r1){
                if(k<=r1&&k>=l2){
                    printf("%lld", r1-l2);
                }
                else{
                    printf("%lld", r1-l2+1);
                }
            }
            else{
                if(k<=r2&&k>=l2){
                    printf("%lld", r2-l2);
                }
                else{
                    printf("%lld", r2-l2+1);
                }
            }
        }
        else if(l1>=l2&&r2>=l1){
            if(r2<=r1){
                if(k<=r2&&k>=l1){
                    printf("%lld", r2-l1);
                }
                else{
                    printf("%lld", r2-l1+1);
                }
            }
            else{
                if(k<=r1&&k>=l1){
                    printf("%lld", r1-l1);
                }
                else{
                    printf("%lld", r1-l1+1);
                }
            }
        }
    }
}