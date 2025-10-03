#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int z = n-2;
        int b[z];
        for(int i=0;i<z;i++){
            cin>>b[i];
        }
        if(z<3){
            cout<<"YES"<<endl;
        }
        else{
            bool flag;
            for(int i=1;i<z-1;i++){
                flag=true;
                if(b[i-1]==1&&b[i]==0&&b[i+1]==1){
                    flag=false;
                    break;
                }
            }
            if(flag){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
}