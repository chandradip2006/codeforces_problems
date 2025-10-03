#include<stdio.h>
int main(){
    char ch;
    int count = 0;
    for(int i = 0 ; i < 100 ; i++){
        scanf("%c" , &ch);
        if(ch == '\n'){
            break;
        }
        else {
            count++;
        }
    }
    printf("%d" , count);
}