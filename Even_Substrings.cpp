#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch[n+1];
    cin>>ch;
    int count=0;
    for(int i=0;i<n;i++){
        if((ch[i]-'0')%2==0){
            count=count+(i+1);
        }
    }
    cout<<count<<endl;
}