#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        long long arr[n];
        long long p=1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            p=p*arr[i];
        }
        cout<<2022*(p+n-1)<<endl;
        t--;
    }
}