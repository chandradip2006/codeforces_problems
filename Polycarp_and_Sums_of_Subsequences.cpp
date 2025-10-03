#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        for(int i=0;i<7;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }

        cout<<v[0]<<" "<<v[1]<<" ";
        if(v[2]==v[3]){
            cout<<v[2]<<endl;
        }
        else{
            if(v[0]+v[1]==v[2]){
                cout<<v[3]<<endl;
            }
            else cout<<v[2]<<endl;
        }
    }
}