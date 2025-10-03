#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char ch[n+1];
        cin>>ch;
        int count=0;
        for(int i=0;i<n;i++){
            if(ch[i]=='0'){
                count++;
            }
        }
        if(count>0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}