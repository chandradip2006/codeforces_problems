#include<stdio.h>
void nTo1(int x){
    if (x == 0) return;
    else {
        printf("%d\n" , x);
        nTo1(x - 1);
    }
}
int main(){
    int n;
    printf("enter a natural number: ");
    scanf("%d" , &n);
    nTo1(n);
    return 0;
}