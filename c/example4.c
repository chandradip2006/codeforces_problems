#include<stdio.h>
int main(){
    int x ;
    printf("enter a year: ");
    scanf("%d" , &x);
    (x % 400 == 0 || (x % 4 == 0 && x % 100 != 0)) ? printf("this is a leap year") : printf("this is not a leap year");
    return 0;
}