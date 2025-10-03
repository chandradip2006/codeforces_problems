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
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                count++;
                for(int j=n-2;j>=i;j--){
                    a[j+1]=a[j];
                }
            }
        }
        cout<<count<<endl;
        t--;
    }
}