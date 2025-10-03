#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        if(n%2!=0){
            if(k%2!=0){
                if(n>=k){
                    cout<<"YES"<<endl;
                    for(int i=0;i<k-1;i++){
                        cout<<"1 ";
                    }
                    if(n!=k){
                        cout<<n-k+1<<endl;
                    }
                    else cout<<1<<endl;
                }
                else cout<<"NO"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else{
            if(k%2!=0){
                if(n>=2*k){
                    cout<<"YES"<<endl;
                    for(int i=0;i<k-1;i++){
                        cout<<"2 ";
                    }
                    if(n!=2*k){
                        cout<<n-2*(k-1)<<endl;
                    }
                    else cout<<2<<endl;
                }
                else cout<<"NO"<<endl;
            }
            else {
                if(n>=k){
                    cout<<"YES"<<endl;
                    for(int i=0;i<k-1;i++){
                        cout<<"1 ";
                    }
                    if(n!=k){
                        cout<<n-k+1<<endl;
                    }
                    else cout<<1<<endl;
                }
                else cout<<"NO"<<endl;
            }
        }
    }
}