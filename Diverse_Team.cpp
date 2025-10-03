#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , k;
    cin>>n>>k;
    unordered_map<int , int>m;
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x]=i+1;
        s.insert(x);
    }

    if(s.size()<k){
        cout<<"NO"<<endl;
        return 0;
    }

    int count=0;
    cout<<"YES"<<endl;

    for(auto it: s){
        if(count==k){
            break;
        }
        cout<<m[it]<<" ";
        count++;
    }
    cout<<endl;
}