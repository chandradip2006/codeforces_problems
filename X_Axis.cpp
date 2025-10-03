#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        for(int i=0;i<3;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }

        sort(v.begin() , v.end());

        cout<<abs(v[0]-v[1])+abs(v[1]-v[2])<<endl;
    }
}