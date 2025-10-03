#include<stdio.h>
void greet(int r){
    if (r == 0) return ;
    else {
        printf("good morning!!\n");
        greet(r - 1);
    }
}
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d" , &n);
    greet(n);
    return 0;
}