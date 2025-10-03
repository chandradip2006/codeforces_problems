#include<stdio.h>
int factorial (int x){
    int z = 1;
    for (int i = 1 ; i <= x ; i++){
        z *= i;
    }
    return z;
}
int ncr(int n , int r){
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main(){
    int x ;
    printf("enter the power: ");
    scanf("%d" , &x);
    // ----------------error---------------
    return 0;
}