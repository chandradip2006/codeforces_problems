#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int l,r;
        cin>>l>>r;
        if(r>=2*l){
            cout<<l<<" "<<2*l<<endl;
        }
        else cout<<-1<<" "<<-1<<endl;
        t--;
    }
}