// without using the variable again
#include<stdio.h>
int main(){
    int x = 3;
    printf("%d\n" , x);
    int* z = &x;
    *z = 7;
    printf("%d\n" , x);
    return 0;
}