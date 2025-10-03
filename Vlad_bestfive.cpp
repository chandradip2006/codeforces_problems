#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[6];
        cin>>ch;
        int count1=0,count2=0;
        for(int i=0;i<5;i++){
            if(ch[i]=='A'){
                count1++;
            }
            else count2++;
        }
        if(count1>count2){
            cout<<"A"<<endl;
        }
        else cout<<"B"<<endl;
        t--;
    }
}