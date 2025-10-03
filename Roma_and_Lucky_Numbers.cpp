#include<iostream>
using namespace std;
int lucky(int x){
    int count=0;
    while(x>0){
        int ld=x%10;
        if(ld==4||ld==7){
            count++;
        }
        x=x/10;
    }
    return count;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(lucky(arr[i])<=k){
            count++;
        }
    }
    cout<<count<<endl;
}