#include<stdio.h>
int main(){
    int n;
    printf("enter the no of rows: ");
    scanf("%d" , &n);
    int count = 0;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            if((i+j) % 2 == 0){
                printf("%c " , 65+count);
            }
            else {
                printf("%c " , 97+count);
            }
            count++;
            if(count % 26 == 0){
                count = 0;
            }
            else continue;
        }
        printf("\n");
    }
}