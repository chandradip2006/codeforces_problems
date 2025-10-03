#include<stdio.h>
int main(){
    int n;
    printf("enter the no of terms in the GP: ");
    scanf("%d" , &n);
    int a;
    printf("enter the first term: ");
    scanf("%d" , &a);
    int r;
    printf("enter the common ratio: ");
    scanf("%d" , &r);
    for (int i=0 ; i<n ; i++){
        printf("%d\n" , a);
        a *= r;
    }
    return 0;
}