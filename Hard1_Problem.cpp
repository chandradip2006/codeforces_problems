#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m , a , b , c;
        cin>>m>>a>>b>>c;
        if(m>=a){
            if(m>=b){
                if(2*m-b-a>=c){
                    cout<<a+b+c<<endl;
                }
                else cout<<2*m<<endl;
            }
            else{
                if(m-a>=c){
                    cout<<m+a+c<<endl;
                }
                else cout<<2*m<<endl;
            }
        }
        else {
            if(m>=b){
                if(m-b>=c){
                    cout<<m+b+c<<endl;
                }
                else cout<<2*m<<endl;
            }
            else{
                cout<<2*m<<endl;
            }
        }
    }
}