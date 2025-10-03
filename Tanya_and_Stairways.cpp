#include<bits/stdc++.h>
using namespace std;
void climb(vector<int>&v , vector<int>&ans){
    int count=1;
    for(int i=0;i<v.size()-1;i++){
        if(v[i+1]-v[i]==1){
            count++;
        }
        else{
            ans.push_back(count);
            count=1;
        }
    }
    ans.push_back(count);
    
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    vector<int>ans;

    climb(v , ans);
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}