#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch[n+1];
    cin>>ch;
    if(n>26){
        cout<<"-1"<<endl;
    }
    else{
        sort(ch,ch+n);
        int count=0;
        for(int i=0;i<n-1;i++){
            if(ch[i]==ch[i+1]){
                count++;
            }
        }
        cout<<count<<endl;
    }
}