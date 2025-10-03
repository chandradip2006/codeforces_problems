#include<stdio.h>
int main (){
    int x ;
    printf("enter the dividend : ");
    scanf("%d" , &x);
    int y ;
    printf("enter the divisor : ");
    scanf("%d" , &y);
    printf("the remainder when dividend is divided by divisor is : %d" , x % y);  // remainder when a is divided by b

    return 0;
}