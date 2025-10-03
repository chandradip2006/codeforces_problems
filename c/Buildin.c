#include<stdio.h>
#include<math.h>
int main(){
    float n;
    printf("enter a number: ");
    scanf("%f" , &n);
    float s = sqrt(n);
    printf("the square root of the number is: %f \n" , s);
    float c = cbrt(n);
    printf("the cube root of the number is: %f" , c);
    return 0;
}