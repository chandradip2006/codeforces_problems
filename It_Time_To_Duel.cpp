#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }

        if(v.size()==2){
            if(v[0]==v[1]){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else{
            bool flag=false;
            int check=0;

            for(int i=0;i<n-1;i++){
                if(v[i]==0&&v[i+1]==0){
                    flag=true;
                    break;
                }
                if(v[i]==0){
                    check=1;
                }
                
            }
            if(v[v.size()-1]==0){
                check=1;
            }

            if(flag){
                cout<<"YES"<<endl;
            }
            else{
                if(check==0){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
        }
    }
}