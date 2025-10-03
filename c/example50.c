//  print sum 1 to n
#include<stdio.h>
int sum(int n){
    if (n == 0) return 0;
    else return (n + sum(n - 1));
}
int main(){
    int n;
    printf("enter a natural number: ");
    scanf("%d" , &n);
    printf("the sum of natural numbers from 1 to %d is: %d" , n , sum(n));
    return 0;
}
