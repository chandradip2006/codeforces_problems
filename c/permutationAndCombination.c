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
    int n;
    printf("enter the total no of objects present: ");
    scanf("%d" , &n);
    int r;
    printf("enter the no of objects to be selected: ");
    scanf("%d" , &r);
    int ways = ncr(n , r);
    printf("the no of ways to select %d objects from %d objects is: %d" , r , n, ways);
    return 0;
}