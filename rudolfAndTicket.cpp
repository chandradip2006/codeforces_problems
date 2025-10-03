#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n , m,k , count=0;
        cin>>n>>m>>k;
        int b[n],c[m];
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<m;i++){
            cin>>c[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(b[i]+c[j]<=k){
                    count++;
                }
            }
        }
        cout<<count<<endl;
        t--;
    }
}