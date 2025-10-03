#include<iostream>
using namespace std;
int mod(int x){
    if(x>=0){
        return x;
    }
    else return (-1)*x;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool flag=true;
        int z1 = arr[0], z=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=arr[0]){
                z1=arr[i];
                z=i;
                break;
            }
        }
        for(int i=z+1;i<n;i++){
            if(arr[i]!=z1&&arr[i]!=arr[0]){
                flag=false;
                break;
            }
        }
        if(flag==false){
            cout<<"NO"<<endl;
            t--;
            continue;
        }
        int count1=0,count2=0;
        for(int i=0;i<n;i++){
            if(arr[i]==arr[0]){
                count1++;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]==z1){
                count2++;
            }
        }
        if(n%2==0){
            if(count1==count2){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else{
            if(mod(count1-count2)==1||count1==count2){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        t--;
    }
}