#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        long long int n;
        cin>>n;
        if(n%2!=0){
            cout<<"YES"<<endl;
        }
        else{
            bool flag=false;
            while(n>1){
                if(n%2==0){
                    n=n/2;
                }
                else{
                    flag=true;
                    break;
                }
            }
            if(flag){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        t--;
    }
}