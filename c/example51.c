// factorial of a number
#include<stdio.h>
int factorial(int x){
    if (x < 0){
        printf("invalid\n");
        return -1;
    }
    else if (x == 0) return 1;
    else {
        return (x * factorial(x - 1));
    }
}
int main(){
    int n;
    printf("enter a natural number: ");
    scanf("%d" , &n);
    printf("the factorial of %d is: %d" , n , factorial(n));
    return 0;
}