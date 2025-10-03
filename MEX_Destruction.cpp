#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n],count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0){
                count++;
            }
        }
        if(count==n){
            cout<<0<<endl;
        }
        else if(count>0&&arr[n-1]!=0&&arr[0]!=0){
            cout<<2<<endl;
        }
        else{
            int count1=0;
            for(int i=1;i<n-1;i++){
                if(arr[i]==0&&arr[i-1]!=0&&arr[i+1]!=0){
                    count1++;
                }
            }
            if(count1==0){
                cout<<1<<endl;
            }
            else cout<<2<<endl;
        }
        t--;
    }
}