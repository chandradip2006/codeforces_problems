#include<stdio.h>
int fibonacci(int n){
    if (n == 1) return 1;
    else if (n == 2) return 1;
    else return (fibonacci(n - 1) + fibonacci(n - 2));
}
int main(){
    int n;
    printf("enter the no of term in the series: ");
    scanf("%d" , &n);
    // printf("the %d th term of the series is: %d" , n , fibonacci(n));
    for (int i = 1 ; i <= n ; i++){
        printf("%d\n" , fibonacci(i));
    }
    return 0;
}