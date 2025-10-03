#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int sum=(n*(n+1))/2;
        long long int root = sqrt(sum);
        // cout<<root<<endl;
        if(sum==root*root){
            cout<<-1<<endl;
            continue;
        }
        else{
            for(int i=1;i<=n;i++){
                long long int k = (i*(i+1))/2;
                long long int z = sqrt(k);
                if(k==z*z){
                    cout<<i+1<<" "<<i<<" ";
                    i++;
                }
                else cout<<i<<" ";
            }
            cout<<endl;
        }
    }
}