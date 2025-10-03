#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        if(n%2==0){
            if(k%2==0){
                if(n%k==0){
                    cout<<n/k<<endl;
                }
                else cout<<n/k+1<<endl;
            }
            else {
                if(n%(k-1)==0){
                    cout<<n/(k-1)<<endl;
                }
                else cout<<n/(k-1)+1<<endl;
            }
        }
        else {
            if(k%2==0){
                if(n-k+1>=k){
                    if((n-k+1)%k==0){
                        cout<<(n-k+1)/k+1<<endl;
                    }
                    else cout<<(n-k+1)/k+2<<endl;
                }
                else cout<<2<<endl;
            }
            else {
                if(n-k>=k-1){
                    if((n-k)%(k-1)==0){
                        cout<<(n-k)/(k-1)+1<<endl;
                    }
                    else cout<<(n-k)/(k-1)+2<<endl;
                }
                else {
                    if(n==k){
                        cout<<1<<endl;
                    }
                    else cout<<2<<endl;
                }
            }
        }
    }
}