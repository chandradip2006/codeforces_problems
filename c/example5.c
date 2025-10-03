// printing an AP
#include<stdio.h>
int main(){
    // int n;
    // printf("enter the number of terms in the AP:  ");
    // scanf("%d" , &n);
    // int a;
    // printf("enter the first term: ");
    // scanf("%d" , &a);
    // int d;
    // printf("enter the common difference: ");
    // scanf("%d" , &d);
    // for (int i=0; i<n ; i++){
    //     printf("%d\n" , a + i * d);
    // }

    // OR
    int n;
    printf("enter the number of terms in the AP:  ");
    scanf("%d" , &n);
    int a;
    printf("enter the first term: ");
    scanf("%d" , &a);
    int d;
    printf("enter the common difference: ");
    scanf("%d" , &d);
    for (int i=0 ; i < n ; i++){
        printf("%d\n" , a);
        a += d;
    }
    return 0;
}