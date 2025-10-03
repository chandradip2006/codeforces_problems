//  counting the no of digit in an integer
#include<stdio.h>
int main(){
    int n;
    printf("enter an integer: ");
    scanf("%d" , &n);
    int count = 0;
    while (n != 0){
        n = n / 10;
        count ++;
    }
    printf("the no of digits in the integer is: %d" , count);
    return 0;
}