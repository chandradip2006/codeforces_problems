// a raised to the power b
#include<stdio.h>
int power(int a , int b){
    if (b == 1) return a;
    else {
        return a * power(a , b - 1);
    }
}
int main(){
    int a;
    printf("enter the base: ");
    scanf("%d" , &a);
    int b;
    printf("enter the power: ");
    scanf("%d" , &b);
    printf("%d raised to the power %d is: %d" , a , b , power(a , b));
    return 0;
}