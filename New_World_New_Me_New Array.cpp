#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k , p;
        cin>>n>>k>>p;
        if(k<=p*n&&k>=(-1)*p*n){
            if(k<0){
                k=k*(-1);
            }
            int count=0;
            count=count+k/p;
            if(k%p!=0){
                count++;
            }
            cout<<count<<endl;
        }
        else cout<<-1<<endl;
    }
}