#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool flag = true;
        if(arr[0]%2==0){
            for(int i= 2;i<n;i=i+2){
                if(arr[i]%2!=0){
                    flag = false;
                    break;
                }
            }
        }
        else{
            for(int i= 2;i<n;i=i+2){
                if(arr[i]%2==0){
                    flag = false;
                    break;
                }
            }
        }
        if(arr[1]%2==0){
            for(int i= 3;i<n;i=i+2){
                if(arr[i]%2!=0){
                    flag = false;
                    break;
                }
            }
        }
        else{
            for(int i= 3;i<n;i=i+2){
                if(arr[i]%2==0){
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}