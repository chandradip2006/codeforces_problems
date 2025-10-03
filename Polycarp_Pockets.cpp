#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max_count=0;
    unordered_map<int , int>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x]++;
        max_count=max(max_count,m[x]);
    }

    cout<<max_count<<endl;
}