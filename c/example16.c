// sum of n natural numbers 
#include<stdio.h>
int main(){
    int n;
    printf("enter a natural number: ");
    scanf("%d" , &n);
    int z = 0;
    for(int i = 1 ; i <= n ; i++){
        z += i;
    }
    printf("the sum of the natural numbers is: %d" , z);
    return 0;
}