#include<iostream>
using namespace std;
int main(){
    int s , n;
    cin>>s>>n;
    bool flag=true;
    int arr[n][2];
    for(int i=0;i< n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j][0]>arr[j+1][0]){
                int temp1=arr[j][0];
                int temp2=arr[j][1];
                arr[j][0]=arr[j+1][0];
                arr[j][1]=arr[j+1][1];
                arr[j+1][0]=temp1;
                arr[j+1][1]=temp2;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(s>arr[i][0]){
            s=s+arr[i][1];
        }
        else {
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}