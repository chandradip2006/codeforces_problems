#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int sum=0;
        for(int i=0;i<n-1;i++){
            if(a[i]>b[i+1]){
                sum=sum+(a[i]-b[i+1]);
            }
        }
        cout<<sum+a[n-1]<<endl;
        t--;
    }
}