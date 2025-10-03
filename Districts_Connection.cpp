#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int>s;
        unordered_map<int , vector<int>>m;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s.insert(x);
            m[x].push_back(i+1);
        }

        if(s.size()==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            int a=m[*s.begin()][0];

            set<int>::iterator itr=s.begin();
            advance(itr , 1);
            for (auto it=itr ;it!=s.end();it++){
                for(int i=0;i<m[*it].size();i++){
                    cout<<a<<" "<<m[*it][i]<<endl;
                }
            }

            int b=m[*itr][0];

            for(int i=1;i<m[*s.begin()].size();i++){
                cout<<b<<" "<<m[*s.begin()][i]<<endl;
            }
        }
    }
}