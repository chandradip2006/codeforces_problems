#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        int sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%3==1){
                count++;
            }

            sum=sum+x;
        }

        if(sum%3==0){
            cout<<0<<endl;
        }
        else if(sum%3==2){
            cout<<1<<endl;
        }
        else {
            if(count>0){
                cout<<1<<endl;
            }
            else cout<<2<<endl;
        }
    }
}