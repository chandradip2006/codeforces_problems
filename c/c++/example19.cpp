#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"enter a natutral number: ";
    // cin>>n;
    // for(int i = 2 ; i <= n ; i = i + 2){
    //     cout<<i<<endl;
    // }

    int n;
    cout<<"enter a natural number: ";
    cin>>n;
    for(int i = 1 ; i <= n ; i++){
        if(i % 2 == 0) cout<<i<<endl;
        else continue;
    }
}