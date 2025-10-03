#include<stdio.h>
int main(){
    char str[50];
    // scanf("%s" , str);  //this has an issue as it breaks after space
    gets(str);  // this prints the complete sentence
    // printf("%s" , str);
    puts(str);

    return 0;
}