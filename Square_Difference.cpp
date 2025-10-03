#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a , b;
        cin>>a>>b;
        long long area=(a+b)*(a-b);
        bool flag =true;
        for(int i=2;i<=(area/i);i++){
            if(area%i==0){
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