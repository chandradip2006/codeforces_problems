#include<stdio.h>
int main(){
    // int n;
    // printf("enter a number: ");
    // scanf("%d" ,&n);
    // for (int i = 1; i < n; i++) {
    //     if (n % i == 0) printf("%d\n" , i);
    // }

    // int n;
    // printf("enter a number: ");
    // scanf("%d" ,&n);
    // int hf;
    // for (int i = 1; i < n; i++) {
    //     if (n % i == 0) hf = i;
    // }
    // printf("the highest factor except the number is: %d" , hf);

    int n;
    printf("enter a number: ");
    scanf("%d" ,&n);
    for (int i = n - 1; i>= 1; i--) {
        if (n % i == 0) {
            printf("the highest factor except the number is: %d" , i);
            break;
        }
    }

    return 0;
}