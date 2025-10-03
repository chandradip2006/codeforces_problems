#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    double a , b;
    scanf("%lf %lf" , &a , &b );
    // a = a+b+c;
    // b = a-b-c;
    // c = a-b-c;
    // a = a-b-c;
    double f=fabs(a-b);
    printf("%lf" , f);

}