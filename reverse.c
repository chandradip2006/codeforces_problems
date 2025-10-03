#include<stdio.h>
#include<string.h>
int main(){
    char ch[6500];
    scanf("%s" , ch);
    // while(ch[count]!='\0'){
    //     count++;
    // }
    int count = strlen(ch);
    for(int i=count-1;i>=0;i--){
        printf("%c",ch[i]);
    }
}