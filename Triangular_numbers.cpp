#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    while(n>0){
        n=n-count;
        count++;
    }
    if(n==0){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}