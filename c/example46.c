// finding min and max of two numbers by function
#include<stdio.h>
void min_max(int a , int b){  // formal parameters
    if (a > b) printf("%d is maximum" , a);
    else printf("%d is maximum" , b);
}
int main(){
    int x;
    printf("enter the number1: ");
    scanf("%d" , &x);
    int y;
    printf("enter the number2: ");
    scanf("%d" , &y);
    min_max(x , y);  // actual parameters
    return 0;
}