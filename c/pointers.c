#include<stdio.h>
int main(){
    int x = 90;
    int* z1 = &x;
    printf("%d\n" , x);
    printf("%p\n" , z1);
    printf("%p\n" , &x);
    int y = 56;
    int* z2 = &y;
    printf("%d\n" , y);
    printf("%p\n" , z2);
    printf("%d\n" , *z1);
    printf("%d\n" , *z2);

    return 0;
}