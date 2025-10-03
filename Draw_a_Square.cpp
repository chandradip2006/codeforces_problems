#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[4];
        for(int i=0;i<4;i++){
            cin>>arr[i];
        }
        bool flag = true;
        for(int i=0;i<3;i++){
            if(arr[i]!=arr[i+1]){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
}