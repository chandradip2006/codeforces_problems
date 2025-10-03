#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tar;
    cin>>tar;
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]+arr[j]>tar){
            j--;
        }
        else if(arr[i]+arr[j]<tar){
            i++;
        }
        else{
            cout<<i+1<<" "<<j+1<<endl;// index is 1-based
            break;
        }
    }
}