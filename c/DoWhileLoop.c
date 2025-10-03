// this loop runs atleast one time even the condition is not valid
#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d" , &n) ;
    int i = 1;
    do{
        printf("%d\n" , i);
        i++;
    } while (i <= n);

    // int j = 11;
    // do{
    //     printf("%d\n" , j);
    //     j++;
    // } while (j <= 10);
    return 0;
}