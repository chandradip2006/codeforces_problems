#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    if(n==1){
        if(a==b){
            cout<<1<<endl;
            cout<<a<<":"<<b<<endl;
        }
        else{
            cout<<0<<endl;
            cout<<a<<":"<<b<<endl;
        }
    }
    else{
        if(a+b<=n){
            cout<<n-(a+b)<<endl;
            for(int i=0;i<a;i++){
                cout<<1<<':'<<0<<endl;
            }
            for(int i=0;i<b;i++){
                cout<<0<<':'<<1<<endl;
            }
            for(int i=0;i<n-(a+b);i++){
                cout<<0<<':'<<0<<endl;
            }
        }
        else{
            cout<<0<<endl;
            if(a>=n){
                for(int i=0;i<n-2;i++){
                    cout<<1<<':'<<0<<endl;
                }
                cout<<a-n<<':'<<0<<endl;
                cout<<0<<':'<<b<<endl;
            }
            else{
                for(int i=0;i<a;i++){
                    cout<<1<<':'<<0<<endl;
                }
                for(int i=0;i<n-a-1;i++){
                    cout<<0<<':'<<1<<endl;
                }
                cout<<0<<':'<<b-(n-a-1)<<endl;
            }
        }
    }
}