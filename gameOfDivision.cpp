#include<iostream>
using namespace std;
int mod(int x){
    if(x>=0){
        return x;
    }
    else{
        return (-1)*x;
    }
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n , k , z=-1;
        cin>>n>>k;
        int arr[n];
        for(int i = 0 ; i<n;i++){
            cin>>arr[i];
        }
        int j=0 , i;
        while(j<n){
            i=0;
            bool flag = true;
            for(i=0; i < n;i++){
                if(i==j){
                    continue;
                }
                else if(mod(arr[i]-arr[j])%k==0){
                    flag = false;
                    j++;
                    break;
                }
            }
            if(flag==false){
                continue;
            }
            else{
                z=j+1;
                break;
            }
        }
        if(z!=-1){
            cout<<"YES"<<endl<<z<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
}