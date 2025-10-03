#include<stdio.h>
int main(){
    char ch;
    scanf("%c" , &ch);
    for(int i = 1 ; i <= 5 ; i++){
        for(int j =1 ; j <= 5 - i ; j++){
            printf(" ");
        }
        printf("%c" , ch);
        if(i == 1){
            printf("\0");
        }
        else if(i==3){
            for(int k = 1 ; k <= 4 ; k++){
                printf("%c" , ch);
            }
        }
        else {
            for(int r = 1 ; r <= 2*(i-1) ; r++){
                printf(" ");
            }
        }
        printf("%c\n" , ch);
    }
}