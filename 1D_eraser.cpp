#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k , count=0,z1,z2;
        cin>>n>>k;
        char ch[n+1];
        cin>>ch;
        for(int i=0;i<n;i++){
            if(ch[i]=='B'){
                z1=i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(ch[n-i-1]=='B'){
                z2=n-i;
                break;
            }
        }
        for(int i=z1;i<z2;i=i+k){
            for(int j=i;j<i+k;j++){
                if(ch[j]=='B'){
                    count++;
                    break;
                }
            }
        }
        cout<<count<<endl;
        t--;
    }
}