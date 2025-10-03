#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>v;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            v.push_back(x);
        }

        bool flag1=false;

        for(int i=0;i<n;i++){
            bool flag=true;
            vector<int>check;
            for(int j=0;j<n;j++){
                if(v[j]%v[i]==0){
                    check.push_back(1);
                }
                else check.push_back(-1);
            }

            for(int k=0;k<check.size()-1;k++){
                if(check[k]+check[k+1]!=0){
                    flag=false;
                    break;
                }
            }
            if(flag){
                cout<<v[i]<<endl;
                flag1=true;
                break;
            }
        }

        if(!flag1){
            cout<<0<<endl;
        }
    }
}