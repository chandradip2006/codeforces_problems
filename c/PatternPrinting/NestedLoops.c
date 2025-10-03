#include<stdio.h>
int main(){
    int c;
    printf("enter the no of stars in each rows(columns): ");
    scanf("%d" , &c);
    int r;
    printf("enter the number of rows: ");
    scanf("%d" , &r);
    for (int i = 1 ; i <= r ; i++){
        for (int j = 1 ; j <= c ; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}