#include<stdio.h>
int main(){
    float a ;
    printf("enter the X coordinate of the centre of the circle: ");
    scanf("%f" , &a);
    float b ;
    printf("enter the Y coordinate of the centre of the circle: ");
    scanf("%f" , &b);
    float r ;
    printf("enter the radius of the circle: ");
    scanf("%f" , &r);
    float x ;
    printf("enter the abcissa: ");
    scanf("%f" , &x);
    float y ;
    printf("enter the ordinate: ");
    scanf("%f" , &y);
    if ((x-a)*(x-a) + (y-b)*(y-b) > r*r) printf("the point lies outside the circle");
    else if ((x-a)*(x-a) + (y-b)*(y-b) == r*r) printf("the point lies on the circle");
    else printf("the point lies inside the circle");


    return 0;
}