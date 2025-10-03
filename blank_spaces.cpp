#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n] , arr1[n+2];
        int count=1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1){
                arr1[count]=i;
                count++;
            }
        }
        arr1[0]=-1;
        arr1[count]=n;
        int z=arr1[1]-arr1[0];
        for(int i=1;i<count;i++){
            if((arr1[i+1]-arr1[i])>z){
                z=arr1[i+1]-arr1[i];
            }
        }
        cout<<z-1<<endl;
        t--;
    }
}