#include<stdio.h>
int root(long long int x , long long int a , long long int b){
    if(a+1==b){
        return a;
    }
    else{
        long long int mid=a+(b-a)/2;
        if(x>mid*mid){
            return root(x,mid,b);
        }
        else if(x==mid*mid){
            return mid;
        }
        else return root(x , a , mid);
    }
}
int main(){
    long long int x;
    scanf("%lld" , &x);
    printf("%d" , root(x , 1 , x));
}