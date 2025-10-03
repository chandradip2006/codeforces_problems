#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<string , int>m;
        vector<vector<string>>ans;
        for(int i=0;i<3;i++){
            vector<string>v;
            for(int j=0;j<n;j++){
                string s;
                cin>>s;
                v.push_back(s);
                m[s]++;

            }
            ans.push_back(v);
        }

        for(int i=0;i<3;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                if(m[ans[i][j]]==1){
                    sum=sum+3;
                }
                else if(m[ans[i][j]]==2){
                    sum=sum+1;
                }
            }
            cout<<sum<<" ";
        }
        cout<<endl;

    }
}