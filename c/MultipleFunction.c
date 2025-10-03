#include<stdio.h>
void japan(){
    printf("you are in Japan\n");
}
void england(){
    printf("you are in England\n");
    japan();
}
void india(){
    printf("you are in India\n");
    england();
}
int main(){
    printf("you are in Main\n");
    india();
    return 0;
}