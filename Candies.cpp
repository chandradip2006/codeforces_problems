#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i=2;
        while(n%(int)(pow(2,i)-1)!=0){
            i++;
        }
        cout<<n/(int)(pow(2,i)-1)<<endl;
    }
}