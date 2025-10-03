#include<iostream>
using namespace std;
long long max(long long x,long long y){
    if(x>=y){
        return x;
    }
    else return y;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long z1=LONG_LONG_MIN ,z2=LONG_LONG_MIN;
        long long z3=LONG_LONG_MAX,z4=LONG_LONG_MAX;
        int z5,z6;
        for(int i=0;i<n;i++){
            if(arr[i]>z1){
                z1=arr[i];
                z5=i;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]>z2&&i!=z5){
                z2=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]<z3){
                z3=arr[i];
                z6=i;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]<z4&&i!=z6){
                z4=arr[i];
            }
        }
        cout<<max(z1*z2,z3*z4)<<endl;
        t--;
    }
}