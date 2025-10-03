#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,m , sum=0;
        cin>>n>>m;
        char ch[n+1];
        cin>>ch;
        int arr[7];
        for(int i=0;i<7;i++){
            arr[i]=0;
        }
        for(int i=0;i<n;i++){
                arr[ch[i]-'A']++;
        }
        for(int i=0;i<7;i++){
            if(arr[i]<m){
                sum=sum+(m-arr[i]);
            }
        }
        cout<<sum<<endl;
        t--;
    }
}