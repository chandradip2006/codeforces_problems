#include<iostream>
using namespace std;
int main(){
    int n ; 
    cin>>n;
    int arr[n];
    for(int i=0;i< n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i< n-1;i++){
        for(int j=i+1;j< n;j++){
            int sum=arr[i]+arr[j];
            int p=1;
            while(sum>2){
                if(sum%2!=0){
                    p=0;
                    break;
                }
                else{
                    sum=sum/2;
                    if(sum%2!=0){
                        p=0;
                        break;
                    }
                }
            }
            if(p==1){
                count++;
            } 
        }
    }
    cout<<count<<endl;
}