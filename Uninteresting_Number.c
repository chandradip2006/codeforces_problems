#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    int t;
    scanf("%d" , &t);
    while(t--){
        char ch[100001];
        scanf("%s" , ch);
        int len = strlen(ch);
        int sum=0;
        bool flag=false;
        for(int i=0;i< len ;i++){
            sum=sum+(ch[i]-'0');
        }
        int rd=sum%9;
        if(rd==0){
            flag=true;
        }
        else{
            int count=0;
            int arr[len];
            for(int i=0;i<len;i++){
                if(ch[i]=='2'){
                    arr[count]=2;
                    count++;
                }
                else if(ch[i]=='3'){
                    arr[count]=6;
                    count++;
                }
            }
            for(int i=0;i<count;i++){
                sum=sum+arr[i];
                
            }
    }
}