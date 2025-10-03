#include<bits/stdc++.h>
using namespace std;

vector<int>convert(vector<float>&v){
    unordered_map<int , int>m;
    vector<int>u;
    // int count=0;
    int sum=0;
    for(int i=0;i<v.size();i++){
        if((int)(v[i])!=v[i]){
            m[i]=1;
            if(v[i]>=0){
                u.push_back((int)(v[i]));
            }
            else{
                u.push_back((int)(v[i])-1);
            }
            // count++;
            
        }
        else{
            u.push_back((int)(v[i]));
        }
        sum=sum+u[u.size()-1];
    }

    if(sum==0){
        return u;
    }
    else{
        
        for(auto &it:m){
            if(sum==0){
                break;
            }
            u[it.first]++;
            sum++;
        }

        return u;
    }
}

int main(){
    int n;
    cin>>n;
    vector<float>v;
    for(int i=0;i<n;i++){
        float x;
        cin>>x;
        v.push_back(x);
    }

    vector<int>ans=convert(v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    
}