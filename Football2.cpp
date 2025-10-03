#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    unordered_map<string , int>m;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        m[str]++;
    }

    vector<int>v;
    vector<string>team;
    for(auto it:m){
        v.push_back(it.second);
        team.push_back(it.first);
    }

    if(v.size()==1){
        cout<<team[0]<<endl;
    }
    else{
        if(v[0]>v[1]){
        cout<<team[0]<<endl;
        }
        else cout<<team[1]<<endl;
    }

    
}