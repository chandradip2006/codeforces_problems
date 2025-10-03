#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch[n+1];
    cin>>ch;
    int count=0;
    for(int i=0;i<n-1;i++){
        if(ch[i]==ch[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
}