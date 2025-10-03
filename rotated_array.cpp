#include<iostream>
using namespace std;
bool binary(int arr[], int a , int b , int tar){
    if(a>b){
        return false;
    }
    else{
        int mid=a+(b-a)/2;
        if(arr[mid]==tar){
            return true;
        }
        else if(arr[mid]>tar){
            return binary(arr,a,mid-1,tar);
        }
        else return binary(arr , mid+1,b,tar);
    }
}
bool check(int arr[] , int a , int b , int tar){
    if(a>b){
        return false;
    }
    else{
        int mid=a+(b-a)/2;
        if(arr[mid]<=arr[b]){
            if(arr[mid]<=tar&&arr[b]>=tar){
                if(binary(arr,mid,b,tar)){
                    return true;
                }
                else return false;
            }
            else {
                return check(arr,a,mid-1,tar);
            } 
        }
        else{
            if(arr[mid]>=tar&&arr[a]<=tar){
                if(binary(arr,a,mid,tar)){
                    return true;
                }
                else return false;
            }
            else return check(arr,mid+1,b,tar);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tar;
    cin>>tar;
    if(check(arr,0,n-1,tar)){
        cout<<"Found"<<endl;
    }
    else cout<<"Not found"<<endl;
}
