#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[7];
        cin>>ch;
        int sum1=0,sum2=0;
        for(int i=0;i<3;i++){
            sum1=sum1+(ch[i]-'0');
        }
        for(int i=5;i>=3;i--){
            sum2=sum2+(ch[i]-'0');
        }
        if(sum1==sum2){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        t--;
    }
}