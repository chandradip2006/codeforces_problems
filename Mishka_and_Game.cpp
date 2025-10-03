#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    int count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(arr[i][0]>arr[i][1]){
            count1++;
        }
        else if(arr[i][0]<arr[i][1]){
            count2++;
        }
    }
    if(count1>count2){
        cout<<"Mishka"<<endl;
    }
    else if(count1<count2){
        cout<<"Chris"<<endl;
    }
    else cout<<"Friendship is magic!^^"<<endl;
}