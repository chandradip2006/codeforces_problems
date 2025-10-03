#include<stdio.h>
int main(){
    // int x ;
    // printf("enter a number: ");
    // scanf("%d" , &x);
    // if (x > 0) printf("this is a positive number");
    // if (x < 0) printf("this is a negative number");

    // int x;
    // printf("enter a number: ");
    // scanf("%d", &x);
    // if (x % 2 == 0) printf("this is an even number");
    // if (x % 2 != 0) printf("this is an odd number");

    // int x;
    // printf("enter a positive integer: ");
    // scanf("%d" , &x);
    // if (x % 5 == 0) printf("the number is divisible by 5");
    // if (x % 5 != 0) printf("the number is not divisible by 5");

    // int x;
    // printf("enter an integer: ");
    // scanf("%d", &x);
    // if (x >= 0) printf("the absolute value is %d" , x);
    // if (x < 0) printf("the absolute value is %d" , (-1) * x);
    // // if (x < 0) {
    // //     x = x * (-1);
    // //     printf("the absolute value is %d" , x);
    // // }

    // float f ;
    // printf ("enter a float number : ");
    // scanf("%f" , &f);
    // int x = (int) f ;
    // float a = (float) x;
    // if (a == f) printf("this is an integer");
    // if (a != f) printf("this is not an integer");

    // float cost_price;
    // printf("enter the cost price: ");
    // scanf("%f" , &cost_price);
    // float selling_price;
    // printf("enter the selling price: ");
    // scanf("%f" , &selling_price);
    // if (cost_price > selling_price) printf("loss: %f" , cost_price - selling_price);
    // if (cost_price < selling_price) printf("profit: %f" , selling_price - cost_price);
    // if (cost_price == selling_price) printf("no prifit , no loss");

    // int x;
    // printf("enter a number: ");
    // scanf("%d", &x);
    // if (x % 2 == 0) printf("this is an even number");
    // else printf("this is an odd number");

    float l;
    printf("enter the length of the rectangle: ");
    scanf("%f" , &l);
    float b;
    printf("enter the breadth of the rectangle: ");
    scanf("%f" , &b);
    float p = 2 * (l + b);
    float a = l * b;
    if (a > p) printf("the area is greater than its perimeter");
    if (a == p) printf("the area is equal to its perimeter");
    if (a < p) printf("the area is less than its perimeter");
    return 0;
}