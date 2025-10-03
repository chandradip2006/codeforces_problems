#include<bits/stdc++.h>
using namespace std;
int fib(int n , int arr[]){
    if(arr[n]!=-1){
        return arr[n];
    }
    else {
        if(n<=1){
            arr[n]=1;
            return arr[n];
        }
        else {
            return arr[n]=fib(n-1 , arr)+fib(n-2 , arr);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<=n;i++){
        a[i]=-1;
    }
    cout<< fib(n , a);

}