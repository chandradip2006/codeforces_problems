#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int m[n],b[n];
    for(int i=0;i<n;i++){
        cin>>m[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int count1=0,count2=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(m[i]+m[j]==k){
                count1++;
            }
            if(b[j]+b[i]==k){
                count2++;
            }
        }
    }
    if(count1>count2){
        cout<<"MAHMOUD"<<endl;
    }
    else if(count1<count2){
        cout<<"BASHAR"<<endl;
    }
    else cout<<"DRAW"<<endl;
}