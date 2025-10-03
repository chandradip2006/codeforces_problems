#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int z=INT_MIN;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
            z=max(z,x);
        }

        vector<int>idx;
        for(int i=0;i<n;i++){
            if(v[i]==z){
                if(i==0){
                    if(v[i+1]<v[i]){
                        idx.push_back(i+1);
                        break;
                    }
                }
                else if(i==n-1){
                    if(v[i-1]<v[i]){
                        idx.push_back(i+1);
                        break;
                    }
                }
                else{
                    if(v[i-1]<v[i]||v[i+1]<v[i]){
                        idx.push_back(i+1);
                        break;
                    }
                }
            }
        }

        if(idx.size()==0){
            cout<<-1<<endl;
        }
        else{
            cout<<idx[0]<<endl;
        }
    }
}
  