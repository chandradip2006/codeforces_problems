#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a , a+n);
    if(k>0){
        if(a[k-1]==a[k]){
            cout<<-1<<endl;
        }
        else cout<<a[k-1]<<endl;
    }
    else {
        if(a[0]>1){
            cout<<1<<endl;
        }
        else cout<<-1<<endl;
    }
}