#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , sum=0,count=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum=sum+arr[i];
            if(arr[i]==1){
                count++;
            }
        }
        if(sum%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            if((sum/2)%2!=0){
                if(count==0){
                    cout<<"NO"<<endl;
                }
                else cout<<"YES"<<endl;
            }
            else cout<<"YES"<<endl;
        }
    }
}