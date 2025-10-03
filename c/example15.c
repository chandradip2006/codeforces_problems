// factorial of a number
#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d" , &n);
    int z = 1;
    for(int i = 1 ; i <= n ; i++){
        z *= i;
    }
    printf("the factorial of the number is: %d" , z);
    return 0;
}