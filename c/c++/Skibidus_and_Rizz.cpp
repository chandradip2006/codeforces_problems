#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , m ,k;
        cin>>m>>n>>k;
        if(abs(n-m)>k){
            cout<<-1<<endl;
        }
        else{
            if(n>=m){
                for(int i=0;i<k;i++){
                    cout<<1;
                }
                n=n-k;
                if(n>=m){
                    for(int i=0;i<m;i++){
                        cout<<"01";
                    }
                    for(int i=0;i<n-m;i++){
                        cout<<1;
                    }
                    cout<<endl;
                }
                else{
                    for(int i=0;i<n;i++){
                        cout<<"01";
                    }
                    for(int i=0;i<m-n;i++){
                        cout<<0;
                    }
                    cout<<endl;
                }
            }
            else{
                for(int i=0;i<k;i++){
                    cout<<0;
                }
                m=m-k;
                if(n>=m){
                    for(int i=0;i<m;i++){
                        cout<<"10";
                    }
                    for(int i=0;i<n-m;i++){
                        cout<<1;
                    }
                    cout<<endl;
                }
                else{
                    for(int i=0;i<n;i++){
                        cout<<"10";
                    }
                    for(int i=0;i<m-n;i++){
                        cout<<0;
                    }
                    cout<<endl;
                }
            }
        }
    }
}