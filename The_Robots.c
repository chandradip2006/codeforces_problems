#include<stdio.h>
int main(){
    char ch[1000001];
    long long int count=0;
    scanf("%c",&ch[count]);
    while(ch[count]!='\0'){
        count++;
        scanf("%c",&ch[count]);
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<count;j++){
            printf("%c" , ch[i]);
        }
        printf("\n");
    }
}