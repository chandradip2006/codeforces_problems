#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool flag = true;
        if(arr[0]==n){
            for(int i=0;i<n-1;i++){
                if(arr[i]<arr[i+1]){
                    flag=false;
                    break;
                }
            }
        }
        else if(arr[0]==1){
            for(int i=0;i<n-1;i++){
                if(arr[i]>arr[i+1]){
                    flag=false;
                    break;
                }
            }
        }
        else{
            int z1=arr[0],z2=arr[0];
            for(int i = 1; i < n ;i++){
                if(((arr[i]-z1)==1)&&(z1<n)){
                    z1=arr[i];
                    continue;
                }
                else if(((arr[i]-z2)==-1)&&(z2>1)){
                    z2=arr[i];
                    continue;
                }
                else{
                    flag=false;
                    break;
                }
            }
        }
        if(flag==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
}