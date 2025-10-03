#include<stdio.h>
int main(){
    float x ;
    printf("enter the x coordinate(abcissa): ");
    scanf("%f", &x);
    float y ;
    printf("enter the y coordinate(ordinate): ");
    scanf("%f", &y);
    if (x > 0 && y > 0) printf("the point lies on 1st quadrant");
    else if (x < 0 && y > 0) printf("the point lies on 2st quadrant");
    else if (x < 0 && y < 0) printf("the point lies on 3st quadrant");
    else if (x > 0 && y < 0) printf("the point lies on 4st quadrant");
    else if (x != 0 && y == 0) printf("the point lies on X axis");
    else if (x == 0 && y != 0) printf("the point lies on Y axis");
    else printf("the point lies at origin");
    

    return 0;
}