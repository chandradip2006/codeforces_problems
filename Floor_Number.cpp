#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,x;
        cin>>n>>x;
        int z=n-2;
        if(z<=0){
            cout<<1<<endl;
        }
        else{
            if(z%x==0){
                cout<<z/x+1<<endl;
            }
            else cout<<z/x+2<<endl;
        }
        t--;
    }
}