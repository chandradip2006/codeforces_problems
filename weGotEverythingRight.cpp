#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k;
        cin>>n>>k;
        char ch[n*k];
        int l=0;
        for(int i=0;i<k;i++){
            for(int j=n*i;j<n*(i+1);j++){
                ch[j]=(char)('a'+i);
            }
        }
        for(int j=0;j<n;j++){
            for(int i=j;i<n*k;i=i+n){
                cout<<ch[i];
            }
        }
        cout<<endl;
        t--;
    }
}