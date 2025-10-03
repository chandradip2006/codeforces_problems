#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d" , &n);
    int z;
    if (n == 1)
    {
        printf("neither prime nor composite");
    }
    else 
    {
        for (int i = n - 1 ; i >= 1 ; i--){
            if (n % i == 0){
                z = i;
                break;
            }
            else continue;
        }
        if (z == 1) printf("this is a prime number");
        else printf("this is a composite number");
    }
    return 0;
}