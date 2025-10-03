#include<stdio.h>
#include<stdbool.h>
int main(){
    // int n;
    // printf("enter a number: ");
    // scanf("%d" , &n);
    // int z = 0;
    // for (int i = 1 ; i <= n ; i++) {
    //     if (n % i == 0){
    //         z += i;
    //     }
    //     else continue;
    // }
    // if (z == n + 1) printf("this is a prime number");
    // else printf("this is not prime number");

    // // OR
    // int n;
    // printf("enter a number: ");
    // scanf("%d" , &n);
    // int z = 1;
    // for (int i = 1 ; i <= n ; i++) {
    //     if (n % i == 0){
    //         z *= i;
    //     }
    //     else continue;
    // }
    // if (z == n && n != 1) printf("this is a prime number");
    // else printf("this is not prime number");

    // int n;
    // printf("enter a number: ");
    // scanf("%d" , &n);
    // int check = 5; // 5 means prime
    // for (int i = 2; i < n ; i++) {
    //     if (n % i == 0) {
    //         check = 10; // 10 means composite
    //         break;
    //     }
    //     else continue;
    // }
    // if (n == 1) printf("neither prime nor composite");
    // else if (check == 10) printf("this is a composite number");
    // else printf("this is a prime number");

    int n;
    printf("enter a number: ");
    scanf("%d" , &n);
    bool flag = true; // prime
    for (int i = 2; i < n ; i++) {
        if (n % i == 0) {
            flag = false; // composite
            break;
        }
        else continue;
    }
    if (n == 1) printf("neither prime nor composite");
    else if (flag == false) printf("this is a composite number");
    else printf("this is a prime number");
    return 0;
}