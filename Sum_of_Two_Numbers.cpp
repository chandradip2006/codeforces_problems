#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        }
        else{
            if((n/2)%10==9){
                cout<<n/2-4<<" "<<n/2+5<<endl;
            }
            else cout<<n/2<<" "<<n/2+1<<endl;
        }
    }
}