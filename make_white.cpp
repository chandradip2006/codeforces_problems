#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n, z1,z2;
        cin>>n;
        char ch[n+1];
        cin>>ch;
        for(int i=0;i<n;i++){
            if(ch[i]=='B'){
                z1=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(ch[i]=='B'){
                z2=i;
                break;
            }
        }
        cout<<z2-z1+1<<endl;
        t--;
    }
}