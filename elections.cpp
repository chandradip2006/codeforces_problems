#include<iostream>
using namespace std;
int max(int x, int y){
    if(x>=y){
        return x;
    }
    else return y;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>max(b,c)){
            cout<<0<<" ";
        }
        else{
            cout<<max(b,c)-a+1<<" ";
        }
        if(b>max(a,c)){
            cout<<0<<" ";
        }
        else{
            cout<<max(a,c)-b+1<<" ";
        }
        if(c>max(b,a)){
            cout<<0<<" ";
        }
        else{
            cout<<max(b,a)-c+1<<" ";
        }
        cout<<endl;
        t--;
    }
}