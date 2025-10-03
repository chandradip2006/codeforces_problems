#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // vector<int>v;
        set<int>s;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s.insert(x);
        }

        // sort(v.begin() , v.end());
        set<int>::iterator itr=s.begin();
        int a=*(s.begin());
        advance(itr , 1);
        int b=*(itr);
        vector<int>u;
        for(auto it:s){
            if(it%a!=0){
                u.push_back(it);
            }
        }

        bool flag=true;
        for(int i=0;i<u.size();i++){
            if(u[i]%b!=0){
                flag=false;
                break;
            }
        }

        if(flag){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
}