#include<bits/stdc++.h>
using namespace std;

int count(int s , int e , int tar){
    if(s>e){
        return e;
    }

    long long int mid=s+(e-s)/2;
    if(mid*(mid+1)==2*tar){
        return mid;
    }
    else if(mid*(mid+1)>2*tar){
        return count(s , mid-1 , tar);
    }
    else{
        return count(mid+1 , e , tar);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int l;
        int r;
        cin>>l>>r;
        int d=r-l;
        int n=count(1 , d , d);
        cout<<n+1<<endl;
    }
}