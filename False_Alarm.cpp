#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int idx1=-1;
        int idx2=-1;
        int count=0;
        for(int i=0;i<n;i++){
            int r;
            cin>>r;
            if(r==1){
                count++;
                idx2=i;
            }
            if(count==1&&idx1==-1){
                idx1=i;
            }
        }

        if(idx1==-1){
            cout<<"YES"<<endl;
        }
        else{
            if(idx2-idx1+1<=x){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }

        // cout<<idx1<<" "<<idx2<<endl;
    }
}