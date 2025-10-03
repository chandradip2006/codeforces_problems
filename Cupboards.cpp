#include<iostream>
using namespace std;
int min(int x,int y){
    if(x>=y){
        return y;
    }
    else return x;
}
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
        if(arr[i][0]==0){
            count1++;
        }
        else count2++;
    }
    int sum=0;
    sum=sum+min(count1,count2);
    count1=0;
    count2=0;
    for(int i=0;i<n;i++){
        if(arr[i][1]==0){
            count1++;
        }
        else count2++;
    }
    sum=sum+min(count1,count2);
    cout<<sum<<endl;
}