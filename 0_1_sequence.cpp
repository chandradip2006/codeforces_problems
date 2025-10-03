#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,m;
        cin>>n>>m;
        char a[n+1],b[m+1];
        cin>>a>>b;
        int count=0;
        bool flag=true;
        for(int i=(n-m+1);i<n;i++){
            count++;
            if(a[i]!=b[count]){
                flag=false;
                break;
            }
        }
        if(flag){
            for(int i=0;i<=(n-m);i++){
                if(a[i]==b[0]){
                    flag= true;
                    break;
                }
                else flag=false;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        t--;
    }
}