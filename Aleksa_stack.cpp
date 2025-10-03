#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        long long int arr[n];
        arr[0]=1;
        arr[1]=3;
        arr[2]=5;
        cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" ";
        for(int i=3;i<n;i++){
            if((arr[i-2]+arr[i-1])%3!=0){
                arr[i]=arr[i-1]+1;
                cout<<arr[i]<<" ";
            }
            else{
                long long int z =(arr[i-1]+arr[i-2])/3;
                long long int r=arr[i-1]%z;
                if(r==0){
                    arr[i]=arr[i-1]+1;
                    cout<<arr[i]<<" ";
                }
                else{
                    arr[i]=arr[i-1]+(z-r)+1;
                    cout<<arr[i]<<" ";
                }
            }
        }
        cout<<endl;
        t--;
    }
}