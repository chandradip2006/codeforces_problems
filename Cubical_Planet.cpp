#include<iostream>
using namespace std;
int main(){
    int arr1[3],arr2[3];
    for(int i=0;i<3;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<3;i++){
        cin>>arr2[i];
    }
    int d;
    for(int i=0;i<3;i++){
        d=d+(arr1[i]-arr2[i])*(arr1[i]-arr2[i]);
    }
    if(d==3){
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
}