#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n-1];
        int sum=0;
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
            sum=sum+arr[i];
        }
        cout<<(-1)*sum<<endl;
        t--;
    }
}