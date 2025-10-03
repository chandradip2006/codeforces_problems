#include<iostream>
using namespace std;
int main(){
    int n , count1=0,count2=0;
    cin>>n;
    char ch[n+1];
    cin>>ch;
    for(int i=0;i<n;i++){
        if(ch[i]=='L'){
            count1++;
        }
        else{
            count2++;
        }
    }
    if(count1==2||count2==2){
        if(count1==2&&ch[0]!='L'&&count2!=2){
            cout<<'1';
        }
        else if(count1==2&&ch[0]=='L'&&count2!=2){
            if(ch[1]=='L'){
                cout<<'2';
            }
        }
        else if(count1!=2&&ch[0]!='O'&&count2==2){
            cout<<'1';
        }
        else if(count1!=2&&ch[0]=='O'&&count2==2){
            if(ch[1]=='O'){
                cout<<'2';
            }
        }
        else{
            cout<<'-'<<'1';
        }
    }
    else{
        cout<<1<<endl;
    }
}