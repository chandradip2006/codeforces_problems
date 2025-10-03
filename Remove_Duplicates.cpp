#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<int , int>m;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        m[x]++;
    }

    unordered_map<int , int>m1;
    vector<int>ans;
    for(int i=0;i<n;i++){
        m1[v[i]]++;
        if(m[v[i]]==m1[v[i]]){
            // cout<<v[i]<<" ";
            ans.push_back(v[i]);
        }
    }

    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


}