#include<iostream>
using namespace std;
int main(){
    int n , k;
    cin>>n>>k;
    int arr[n] , z=0;
    bool flag = false;
    for(int i=0;i< n;i++){
        cin>>arr[i];
        if(arr[i]<0&&k>0){
            arr[i]=arr[i]*(-1);
            flag = true;
            z=i;
            k--;
        }
    }
    if(flag){
        if(k%2!=0){
            if(z==(n-1)){
                arr[z]=arr[z]*(-1);
            }
            else{
                if(arr[z+1]>arr[z]){
                    arr[z]=arr[z]*(-1);
                }
                else arr[z+1]=arr[z+1]*(-1);
            }
        }
    }
    else {
        if(k%2!=0){
            arr[z]=arr[z]*(-1);
        }
    }
    int sum=0;
    for(int i=0;i< n;i++){
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
}