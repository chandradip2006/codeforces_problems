#include<stdio.h>
void england(){
    printf("you are in England\n");
    void japan();  // prototype
    japan();
}
void japan(){
    printf("you are in Japan\n");
}
int main(){
    printf("you are in Main\n");
    void india();  //prototype
    india();
    return 0;
}
void india(){
    printf("you are in India\n");
    england();
}
