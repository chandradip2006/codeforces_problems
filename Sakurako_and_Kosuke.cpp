#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=0;
        int count=1;
        while(x<=n&&x>=(-1)*n){
            if(count%2==0){
                x=x+(2*count-1);

            }
            else x=x-(2*count-1);

            count++;
        }

        if(count%2!=0){
            cout<<"Kosuke"<<endl;
        }
        else cout<<"Sakurako"<<endl;
    }
}