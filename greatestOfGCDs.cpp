#include<iostream>
using namespace std;
long long int gcd(long long int x , long long int y){
    if(x>y){
        if(y==0){
            return x;
        }
        else {
            long long int temp =x;
            x=y;
            y=temp%y;
            return gcd(x,y);
        }
    }
    else{
        if(x==0){
            return y;
        }
        else {
            long long int temp =y;
            y=x;
            x=temp%x;
            return gcd(x,y);
        }
    }
}
int main(){
    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t;
    cin>>t;
    while(t>0){
        long long int a,b, count=0;
        cin>>a>>b;
        long long int k=b-a+1;
        long long int arr1[(k*(k-1))/2];
        for(int i=a-1;i<b-1;i++){
            for(int j=i+1;j<b;j++){
                arr1[count]=gcd(arr[i],arr[j]);
                count++;
            }
        }
        long long int z=arr1[0];
        for(int i=0;i<count;i++){
            if(arr1[i]>z){
                z=arr1[i];
            }
        }
        cout<<z<<endl;
        t--;
    }
}