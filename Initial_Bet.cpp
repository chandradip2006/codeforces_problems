#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int sum=0;
    for(int i=0;i<5;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    if(sum%5==0){
        if(sum==0){
            cout<<-1<<endl;
        }
        else{
            cout<<sum/5<<endl;
        }
        
    }
    else cout<<-1<<endl;
}