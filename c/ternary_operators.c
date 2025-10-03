// expression1 (if condition) ? expression2(true) : expression3(false , else)
// condition ? true : false
#include<stdio.h>
int main(){
    int x ;
    printf("enter a positive integer: ");
    scanf("%d" , &x);
    (x % 2 == 0) ? printf("this is an even number") : printf("this is an odd number");
    return 0;
}