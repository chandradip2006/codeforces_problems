#include<stdio.h>
int main(){
    int x = 5;
    int y = 2;
   // printf("%d %d" , x , y);
    printf("%d\n" , x + y);
    printf("%d\n" , x - y);
    printf("%d\n" , x * y);
    printf("%d\n" , x / y);   // here it gives an integer less than or equal to that value(greatest integer function)
    return 0;
}