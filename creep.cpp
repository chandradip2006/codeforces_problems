#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int a,b;
        cin>>a>>b;
        if(a>=b){
            for(int i=0;i<b;i++){
                cout<<10;
            }
            for(int i=0;i<a-b;i++){
                cout<<0;
            }
        }
        else{
            for(int i=0;i<a;i++){
                cout<<10;
            }
            for(int i=0;i<b-a;i++){
                cout<<1;
            }
        }
        cout<<endl;
        t--;
    }
}