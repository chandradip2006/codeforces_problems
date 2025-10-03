// sum of three integers
#include<stdio.h>
int sum(int a , int b , int c){
    int z = a + b + c;
    return z;
}
int main(){
    int x;
    printf("enter the first number: ");
    scanf("%d" , &x);
    int y;
    printf("enter the second number: ");
    scanf("%d" , &y);
    int z;
    printf("enter the third number: ");
    scanf("%d" , &z);
    printf("the sum is: %d" , sum(x , y , z));
    return 0;
}