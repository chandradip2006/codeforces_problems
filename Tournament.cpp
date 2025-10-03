#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , j , k;
        cin>>n>>j>>k;
        int max_num=0;
        int min_num=INT_MAX;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
            max_num=max(max_num , x);
            min_num=min(min_num , x);
        }

        if(max_num==min_num){
            cout<<"YES"<<endl;
        }
        else{
            // if(v[j-1]==min_num){
            //     if(k==1){
            //         cout<<"NO"<<endl;
            //     }
            //     else cout<<"YES"<<endl;
            // }
            // else cout<<"YES"<<endl;
            if(k==1){
                if(v[j-1]==max_num){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
}