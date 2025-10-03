#include<bits/stdc++.h>
using namespace std;
// void lucky(int s , int e , int k , long long int &count , int idx){
//     if(s>e){
//         return;
//     }
//     if(e-s+1<k){
//         return;
//     }
//     int mid=s+(e-s)/2;
//     if((e-s+1)%2==0){
//         lucky(s,mid , k , count , idx);
//     }
//     else {
//         count=count+mid;
//         count=count+(2*idx-mid);

//         lucky(s,mid-1 , k , count , idx);
        
//     }
// }
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;

        // long long int count=0;
        // int idx=1+(n-1)/2;
        // lucky(1 , n , k , count , idx);
        // cout<<count<<endl;

        long long sum=0;
        for(int i=k;i<=n;i=i+k){
            sum=sum+i;
        }
        cout<<sum<<endl;
    }
}