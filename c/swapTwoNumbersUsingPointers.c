#include<stdio.h>
void swap (int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    // int x ;
    // printf("enter the number1: ");
    // scanf("%d" , &x);
    // int* z1 = &x;
    // int y ;
    // printf("enter the number2: ");
    // scanf("%d" , &y);
    // int* z2 = &y;
    // printf("%d %d\n" , x , y);
    // int temp = *z1;
    // *z1 = *z2;
    // *z2 = temp;
    // printf("after swaping\n");
    // printf("%d %d\n" , x , y);

    // using pointer and function
    int x;
    printf("enter the number1: ");
    scanf("%d" , &x);
    int y;
    printf("enter the number1: ");
    scanf("%d" , &y);
    printf("%d %d\n" , x , y);
    swap(&x , &y);
    printf("after swaping\n");
    printf("%d %d\n" , x , y);

    return 0;
}