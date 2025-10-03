#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    long long sum=0;
    for(int i=0;i<k;i++){
        int x;
        cin>>x;
        if(sum==0||sum==1){
            sum=sum+(x%10);
        }
        else{
            if(x%10==1||x%10==0){
                sum=(sum+(x%10))%MOD;
            }
            else{
                sum=(sum*(x%10))%MOD;
            }
        }

        
    }
    cout<<sum%MOD;
}