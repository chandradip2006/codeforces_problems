#include<stdio.h>
int main(){
    int x;
    printf("enter the number1: ");
    scanf("%d" , &x);
    int y;
    printf("enter the number2: ");
    scanf("%d" , &y);
    int z;
    printf("enter the number3: ");
    scanf("%d" , &z);
    if (x >= y){
        if (x >= z) printf("the greatest number is: %d" , x);
        else printf("the greatest number is: %d" , z);
    }
    else {
        if (y >= z) printf("the greatest number is: %d" , y);
        else printf("the greatest number is: %d" , z);
    }
    return 0 ;
}