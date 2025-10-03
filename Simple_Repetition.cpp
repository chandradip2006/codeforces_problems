#include<bits/stdc++.h>
using namespace std;

bool check(int x){
    if (x==1){
        return false;
    }

    for(int i=2;i<=(x/i);i++){
        if(x%i==0){
            return false;
        }
    }

    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        if(x==1){
            int r=0;
            for(int i=0;i<k;i++){
                r=r*10+1;
            }
            if(check(r)){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else{
            if(k==1){
                if(check(x)){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}