#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        long long int sum=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum=sum+arr[i];
        }
        long long int z=sqrt(sum);
        if(z*z==sum){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        t--;
    }
}