#include<stdio.h>
int factorial(int x){
    if (x == 0){
        return 1;
    }
    else return x * factorial(x - 1);
}
int main(){
    int n;
    printf("enter a non negative integer of which the factorial to be found: ");
    scanf("%d" , &n);
    printf("the factorial is: %d" , factorial(n));
    return 0;
}