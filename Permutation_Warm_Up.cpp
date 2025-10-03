#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        int count=0;
        for(int i=1;i<=n/2;i++){
            sum=sum+2*(n-1-2*count);
            count++;
        }

        cout<<sum/2+1<<endl;
    }
}