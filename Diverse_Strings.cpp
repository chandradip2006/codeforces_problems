#include<iostream>
using namespace std;
void swap(char* ch1, char* ch2){
    char temp=*ch1;
    *ch1=*ch2;
    *ch2=temp;
}
int main(){
    int n;
    cin>>n;
    while(n>0){
        char ch[101];
        cin>>ch;
        int count=0;
        while(ch[count]!='\0'){
            count++;
        }
        for(int i=0;i<count-1;i++){
            for(int j=0;j<count-1;j++){
                if(ch[j]>ch[j+1]){
                    swap(&ch[j],&ch[j+1]);
                }
            }
        }
        bool flag = true;
        for(int i=0;i<count-1;i++){
            if((ch[i+1]-ch[i])!=1){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
        n--;
    }
}