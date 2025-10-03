#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch[101];
    cin>>ch;
    int count=0;
    while(ch[count]!='\0'){
        count++;
    }
    int arr [count] , count1=0;
    for(int i=0;i<count;i++){
        if(ch[i]=='1'){
            arr[count1]=i+1;
            count1++;
        }
    }
    if(count1==0){
        cout<<"no"<<endl;
    }
    else{
        sort(arr , arr+count1);
        if((count-arr[count1-1])>=6){
            cout<<"yes"<<endl;
        }
        else{
            int sum=0;
            for(int i=0;i< count1-1;i++){
                sum=sum+(arr[i+1]-arr[i]-1);
            }
            if(sum>=6){
                cout<<"yes"<<endl;
            }
            else cout<<"no"<<endl;
        }
    }
}