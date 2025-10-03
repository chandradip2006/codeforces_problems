#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , s , m;
        cin>>n>>s>>m;
        int arr[2*n+2];
        arr[0]=0;
        for(int i=1 ; i<2*n+1;i++){
            cin>>arr[i];
        }
        arr[2*n+1]=m;
        bool flag = false;
        for(int i=0;i<2*n+1;i++){
            if((arr[i+1]-arr[i])>=s){
                flag=true;
                break;
            }
            else i++;
        }
        if(flag){
        cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}