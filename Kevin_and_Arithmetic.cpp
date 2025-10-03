#include<iostream>
using namespace std;
int num(int x){
    int count=0;
    if(x%2!=0){
        return count;
    }
    else {
        while(x%2==0){
            count++;
            x=x/2;
        }
        return count;
    }
}
int odd(int x){
    if(x%2!=0){
        return x;
    }
    else{
        return odd(x/2);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        int arr[n];
        bool flag = false;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                flag = true;
            }
        }
        if(flag){
            count=1;
            for(int i=0;i< n;i++){
                if(arr[i]%2!=0){
                    count++;
                }
            }
        }
        else {
            for(int i=1;i< n;i++){
                if(arr[i]%2!=0){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}