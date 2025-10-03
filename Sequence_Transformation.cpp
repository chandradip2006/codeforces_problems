#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int , vector<int>>m;
        set<int>s;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            m[x].push_back(i);
            s.insert(x);
        }

        vector<int>count;
        for(auto it:s){
            int num=0;
            for(int i=0;i<m[it].size()-1;i++){
                if(m[it][i+1]-m[it][i]!=1){
                    num++;
                }
            }

            if(m[it][0]!=0){
                num++;
            }
            if(m[it][m[it].size()-1]!=n-1){
                num++;
            }
            count.push_back(num);
        }

        int z=INT_MAX;
        for(int i=0;i<count.size();i++){
            z=min(z,count[i]);
        }
        cout<<z<<endl;
    }
}