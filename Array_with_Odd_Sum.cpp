#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2==0){
                count1++;
            }
            else count2++;
        }

        if(count1==n){
            cout<<"NO"<<endl;
        }
        else{
            if(count2==n){
                if(n%2==0){
                    cout<<"NO"<<endl;
                }
                else cout<<"YES"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
}