//  product of digits of a number
#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d" , &n);
    int z = n;
    int r = 1;
    while(z != 0){
        r *= (z % 10);
        z = z / 10;
    }
    printf("the product of the digits is : %d" , r);

    return 0;
}