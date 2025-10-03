#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n , count=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool flag = false;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                cout<<0<<endl;
                flag=true;
                break;
            }
            else{
                if(arr[i]<0){
                    count++;
                }
            }
        }
        if(flag==false){
            if(count%2!=0){
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
                cout<<1<<" "<<0<<endl;
            }
        }
        t--;
    }
}