#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[2*n];
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
        }
        int arr1[n];
        int count=1;
        bool flag;
        arr1[0]=arr[0];
        for(int i=1;i<2*n;i++){
            flag=true;
            for(int j=0;j<count;j++){
                if(arr[i]==arr1[j]){
                    flag=false;
                    break;
                }
            }
            if(flag){
                arr1[count]=arr[i];
                count++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr1[i]<<" ";
        }
        cout<<endl;
    }
}