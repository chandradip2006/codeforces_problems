#include<stdio.h>
void OddEven(int x){
    if ( x % 2 == 0) printf("it is an even number.");
    else printf("it is an odd number.");
}
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d" , &n);
    OddEven(n);  // pass by value
    return 0;
}