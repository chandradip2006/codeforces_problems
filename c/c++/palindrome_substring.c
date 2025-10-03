#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int check(char ch[] , int a , int b){
    int mid=a+(b-a)/2;
    bool flag=true;
    for(int i=a;i<mid;i++){
        if(ch[i]!=ch[b-1-i]){
            flag=false;
            break;
        }
    }
    if(flag){
        return 1;
    }
    else return 0;
}
int main(){
    char ch[101];
    scanf("%s" , ch);
    int count=strlen(ch);
    int count1=0;
    for(int i=0;i<count;i++){
        for(int j=i;j<count;j++){
            char ch1[j-i+1];
            for(int l=0;l<j-i+1;l++){
                ch1[l]=ch[i+l];
            }
            if(check(ch1,0,j-i+1)==1){
                count1++;
            }
        }
    }
    printf("%d" , count1);
}