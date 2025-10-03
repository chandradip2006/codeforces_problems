#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n , count=0;
        cin>>n;
        int arr[n],arr1[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool flag=false;
        for(int i=0;i<n;i++){
            if((n-2)%arr[i]==0){
                arr1[count]=arr[i];
                count++;
            }
        }
        for(int i=0;i<count-1;i++){
            for(int k=i+1;k<count;k++){
                if(arr1[i]==(n-2)/arr1[k]){
                    flag=true;
                    cout<<arr1[i]<<" "<<arr1[k]<<endl;
                    break;
                }
            }
            if(flag==true){
                break;
            }
        }
        t--;
    }
}