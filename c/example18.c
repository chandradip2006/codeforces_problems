// printing ASCII values and their corresponding characters
#include<stdio.h>
int main(){
    for (int i = 0 ; i < 26 ; i++){
        char ch = (char) (65 + i);
        printf("%d : " , 65 + i);
        printf("%c \n" , ch);
    }
    return 0;
}