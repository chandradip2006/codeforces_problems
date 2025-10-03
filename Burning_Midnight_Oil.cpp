#include<iostream>
using namespace std;
bool check(int mid , int tar , int k){
    int sum=0;
    while(mid>0){
        sum=sum+(mid);
        mid=mid/k;
    }
    if(sum>=tar){
        return true;
    }
    else return false;
}
int binary(int a , int b , int tar , int k){
    if(a>=b){
        return b;
    }
    else{
        int mid = a+(b-a)/2;
        if(check(mid,tar , k)){
            return binary(a , mid , tar , k);
        }
        else return binary(mid+1 , b , tar , k);
    }
}
int main(){
    int n , k;
    cin>>n>>k;
    cout<<binary(1 , n , n ,k)<<endl;
}