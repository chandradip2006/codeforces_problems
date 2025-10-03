#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        unordered_map<int , pair<int , int>>m;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
            m[x].first++;
            m[x].second=i+1;
        }

        set<int>s;
        for(int i=0;i<n;i++){
            if(m[v[i]].first==1){
                s.insert(v[i]);
            }
        }

        if(s.size()==0){
            cout<<-1<<endl;
        }
        else cout<<m[*s.begin()].second<<endl;
    }
}