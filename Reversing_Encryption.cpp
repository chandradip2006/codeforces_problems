#include<bits/stdc++.h>
using namespace std;

void reverse(string &str , int n){
    for(int i=0;i<n/2;i++){
        char temp=str[i];
        str[i]=str[n-1-i];
        str[n-1-i]=temp;
    }
}
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;

    for(int i=1;i<=n;i++){
        if(n%i==0){
            reverse(str , i);
        }
    }

    cout<<str<<endl;
}