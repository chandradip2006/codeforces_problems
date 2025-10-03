#include<stdio.h>
int main(){
    int x = 5;
    x++;  // post increment x = x + 1
    ++x; // pre increment x = x + 1
    printf("%d\n" , x);
    printf("%d\n" , x++);  // first print then increment
    printf("%d\n" , x);
    printf("%d\n" , x);
    printf("%d\n" , ++x);  // first increment then print
    printf("%d\n" , x);
    x--;  //post decrement x = x - 1
    --x;  // pre decrement x = x - 1
    printf("%d\n" , x);
    printf("%d\n" , x--);  // first print then decrement
    printf("%d\n" , x);
    printf("%d\n" , x);
    printf("%d\n" , --x);  // first decrement then print
    printf("%d\n" , x);
    return 0;
}