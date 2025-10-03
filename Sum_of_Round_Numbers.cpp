#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , count=0;
        cin>>n;
        int z=n;
        while(n>0){
            count++;
            n=n/10;
        }
        int arr[count] , count1=0 , count2=0;
        while(z>0){
            arr[count1]=z%10;
            if(arr[count1]!=0){
                count2++;
            }
            z=z/10;
            count1++;
        }
        cout<<count2<<endl;
        for(int i=0;i<count;i++){
            if(arr[i]!=0){
                cout<<arr[i]*pow(10,i)<<" ";
            }
        }
        cout<<endl;
    }
}