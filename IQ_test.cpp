#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n] , a[n] , b[n] , count1=0,count2=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            a[count1]=i+1;
            count1++;
        }
        else {
            b[count2]=i+1;
            count2++;
        }
    }
    if(count1==1){
        cout<<a[0]<<endl;
    }
    else cout<<b[0]<<endl;
}