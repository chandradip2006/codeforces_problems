#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;

    long long sum=0;
    long long max_sum=LONG_LONG_MIN;

    for(int i=0;i<n;i++){
        cin>>x;
        sum=sum+x;
        max_sum=max(max_sum , sum);
        if(sum<0){
            sum=0;
        }
    }

    cout<<max_sum<<endl;
}