#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>idx;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1){
                idx.push_back(i);
            }
        }
        vector<int>v;
        for(int i=0;i<idx.size();i++){
            int sum=0;
            int count=1;
            for(int j=i-1;j>=0;j--){
                sum=sum+(idx[i]-idx[j]-count);
                count++;
            }

            count=1;

            for(int j=i+1;j<idx.size();j++){
                sum=sum+(idx[j]-idx[i]-count);
                count++;
            }
            v.push_back(sum);
        }

        int z=INT_MAX;
        for(int i=0;i<v.size();i++){
            z=min(z,v[i]);

        }

        cout<<z<<endl;

    }
}