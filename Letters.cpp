#include<bits/stdc++.h>
using namespace std;

int search(vector<long long> v , int s , int e , long long tar){
    if(s>e){
        return e;
    }

    int mid=s+(e-s)/2;
    if(v[mid]==tar){
        return mid;
    }
    else if(v[mid]>tar){
        return search(v,s,mid-1,tar);
    }
    else{
        return search(v,mid+1,e,tar);
    }
}
int main(){
    int n,m;
    cin>>n>>m;

    vector<long long int>u;
    u.push_back(0);
    long long sum=0;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        sum=sum+x;
        u.push_back(sum);
    }

    // vector<long long>v;

    for(int i=0;i<m;i++){
        long long x;
        cin>>x;
        // v.push_back(x);
        int idx=search(u , 0 , u.size()-1 , x);
        if(u[idx]==x){
            cout<<idx<<" "<<u[idx]-u[idx-1]<<endl;
        }
        else{
            cout<<idx+1<<" "<<x-u[idx]<<endl;
        }
    }

    // for(int i=0;i<m;i++){
    //     int idx=search(u , 0 , u.size()-1 , v[i]);

    //     if(u[idx]==v[i]){
    //         cout<<idx<<" "<<u[idx]-u[idx-1]<<endl;
    //     }
    //     else{
    //         cout<<idx+1<<" "<<v[i]-u[idx]<<endl;
    //     }
    // }
}