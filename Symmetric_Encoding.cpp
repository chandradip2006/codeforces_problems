#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        set<char>s;
        for(int i=0;i<n;i++){
            s.insert(str[i]);
        }

        unordered_map<char , char>m;
        vector<char>v;
        for(auto it:s){
            v.push_back(it);
        }

        for(int i=0;i<v.size();i++){
            m[v[i]]=v[v.size()-1-i];
        }

        for(int i=0;i<n;i++){
            str[i]=m[str[i]];
        }

        cout<<str<<endl;
    }
}