#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a , a+n);
        sort(b , b+n);
        int count1=1,count2=1;
        for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                count1++;
            }
            if(b[i]!=b[i+1]){
                count2++;
            }
        }
        if(count1+count2>=4){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}