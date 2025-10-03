#include<iostream>
#define MOD 1000000007
using namespace std;
int pow1(int a , int b){
    if(b==0){
        return 1;
    }
    else return (a*pow1(a,b-1))%MOD;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int k , n;
        cin>>k>>n;
        int arr[n+1];
        int sum=0;
        for(int i=0;i<=n;i++){
            cin>>arr[i];
            sum=sum+arr[i];
        }
        cout<<pow1(sum,k)<<endl;
    }
}