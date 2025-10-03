#include<stdio.h>
int main(){
    // int x ;
    // printf("enter an integer: ");
    // scanf("%d" , &x);
    // if (1000 > x && x > 99) printf("this is a three digited number");
    // else printf("this is not a three integer");

    // int x ;
    // printf("enter a positive integer: ");
    // scanf("%d" , &x);
    // if (x % 3 == 0 && x % 5 == 0) printf("the number is divisible by both 3 and 5");
    // else printf("the number is not divisible by both 3 and 5");

    // int x ;
    // printf("enter a positive integer: ");
    // scanf("%d" , &x);
    // if (x % 3 == 0 || x % 5 == 0) printf("the number is divisible by  3 or 5");
    // else printf("the number is divisible by neither 3 nor 5");

    // float l1;
    // printf("enter the length of side1: ");
    // scanf("%f" , &l1);
    // float l2;
    // printf("enter the length of side2: ");
    // scanf("%f" , &l2);
    // float l3;
    // printf("enter the length of side3: ");
    // scanf("%f" , &l3);
    // if (l1 + l2 > l3 && l3 + l2 > l1 && l1 + l3 > l2) printf("the sides form a triangle");
    // else printf("the sides donot form a triangle");

    // int x;
    // printf("enter the number1: ");
    // scanf("%d" , &x);
    // int y;
    // printf("enter the number2: ");
    // scanf("%d" , &y);
    // int z;
    // printf("enter the number3: ");
    // scanf("%d" , &z);
    // if ( x > y && x > z) printf("the greatest number is : %d" , x);
    // if ( y > x && y > z) printf("the greatest number is : %d" , y);
    // if ( z > y && z > x) printf("the greatest number is : %d" , z);

    // int x;
    // printf("enter the number1: ");
    // scanf("%d" , &x);
    // int y;
    // printf("enter the number2: ");
    // scanf("%d" , &y);
    // int z;
    // printf("enter the number3: ");
    // scanf("%d" , &z);
    // if ( x < y && x < z) printf("the least number is : %d" , x);
    // if ( y < x && y < z) printf("the least number is : %d" , y);
    // if ( z < y && z < x) printf("the least number is : %d" , z);

    // int year ;
    // printf("enter a year: ");
    // scanf("%d" , &year) ;
    // if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) printf("the year is a leap year");
    // else printf("the year is not a leap year");

    int x;
    printf("enter a positive integer: ");
    scanf("%d" , &x);
    if (x % 3 == 0 || x % 5 == 0) {
        if (x % 15 == 0) printf("the number is divisible by 3 or 5 and divisible by 15");
        else printf("the number is divisible by 3 or 5 but not divisible by 15");
    }
    else printf("the number is divisible by neither 3 nor 5");
    return 0;
}