#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        char ch[n+1];
        cin>>ch;
        if(n==1){
            cout<<"YES"<<endl;
        }
        else{
            if(n==2){
                int count=0;
                for(int i=0;i<n;i++){
                    if(ch[i]=='1'){
                        count++;
                    }
                }
                if(count==1){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        t--;
    }
}