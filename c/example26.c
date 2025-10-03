#include<stdio.h>
int main(){
    int n;
    printf("enter the no of rows: ");
    scanf("%d" , &n);
    int z = n / 2;
    for (int i = 1; i <= z ; i++){
        for (int j = 1 ; j < (2 * i) ; j++){
            printf("%d " , j);
        }
        printf("\n");
        for(int r = 0 ; r < (2 * i) ; r++){
            printf("%c " , 65 + r);
        }
        printf("\n");
    }
    if (n % 2 != 0) {
        for (int k = 1 ; k <= n; k++){
            printf("%d " , k);
        }
    }
    return 0;
}