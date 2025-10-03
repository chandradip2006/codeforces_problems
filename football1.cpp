#include<iostream>
using namespace std;
int main(){
    char ch[101];
    cin>>ch;
    int count=0;
    while(ch[count]!='\0'){
        count++;
    }
    int count1=0;
    for(int i=0;i<count-1;i++){
        if(ch[i]==ch[i+1]){
            count1++;
        }
        else{
            if(count1+1>=7){
                cout<<"YES"<<endl;
                return 0;
            }
            else{
                count1=0;
            }
        }
    }
    if(count1+1>=7){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}