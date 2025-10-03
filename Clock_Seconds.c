#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d" , &a,&b ,&c);
    char ch[3];
    scanf("%s" , ch);
    if(ch[0]=='A'){
        int t=a*3600+b*60+c;
        printf("%d\n",t);
    }
    else{
        if(a==12){
            int t=a*3600+b*60+c;
            printf("%d\n",t);
        }
        else{
            int t=(a+12)*3600+b*60+c;
            printf("%d\n",t);
        }
    }
}