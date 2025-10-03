#include<stdio.h>
int main(){
    int l;
    printf("enter the length: ");
    scanf("%d" ,&l);
    int b;
    printf("enter the breadth: ");
    scanf("%d" ,&b);
    for(int i = 1; i <= l ; i++){
        printf("* ");
    }
    printf("\n");
    for (int j = 1 ; j <= (b - 2) ; j++){
        printf("*");
        for(int k = 1 ; k <= (2 * l - 3) ; k++){
            printf(" ");
        }
        printf("*\n");
    }
    for(int i = 1; i <= l ; i++){
        printf("* ");
    }

    return 0;
}