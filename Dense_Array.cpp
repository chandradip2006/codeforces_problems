#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }

        int count=0;

        for(int i=0;i<n-1;i++){
            
            if((float)max(v[i] , v[i+1])/min(v[i] , v[i+1])>2){
                int z=max(v[i] , v[i+1])/min(v[i] , v[i+1]);
                int pow1=0;
                float n=(float)max(v[i] , v[i+1])/min(v[i] , v[i+1]);
                while(z>1){
                    z=z/2;
                    pow1++;
                }
                if(pow(2 , pow1)==n){
                    pow1--;
                }
                count+=pow1;
                
            }
            
        }

        cout<<count<<endl;
    }
}