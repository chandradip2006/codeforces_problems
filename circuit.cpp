#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n , count = 0, max,min;
        cin>>n;
        int arr[2*n];
        for(int i = 0 ; i < 2*n ;i++){
            cin>>arr[i];
        }
        for(int i = 0 ; i<2*n;i++){
            if(arr[i]==1){
                count++;
            }
        }
        if(count%2==0){
            cout<<0<<" ";
        }
        else{
            cout<<1<<" ";
        }
        if(count<=n){
            max = count;
        }
        else{
            max=n-(count-n);
        }
        cout<<max<<endl;;
        t--;
    }
}