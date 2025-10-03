#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n ;i++){
            cin>>arr[i];
        }
        sort(arr , arr+n);
        bool flag = false;
        int z1 , z2 , arr1[n] , count=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                z1=i;
                z2=i+1;
                flag=true;
            }
        }
        if(flag){
            if(z1>1){
                cout<<arr[0]<<" "<<arr[1]<<" "<<arr[z1]<<" "<<arr[z2]<<endl;
            }
            else{
                if(z1==1){
                    if((arr[0]+arr[z1]+arr[z2])>arr[z2+1]){
                        flag = true;
                        cout<<arr[0]<<" "<<arr[z1]<<" "<<arr[z2]<<" "<<arr[z2+1]<<endl;
                    }
                    else{
                        flag = false;
                        for(int i=z2+1;i<n-1;i++){
                            if((arr[z1]+arr[z2]+arr[i])>arr[i+1]){
                                flag = true;
                                cout<<arr[z1]<<" "<<arr[z2]<<" "<<arr[i]<<" "<<arr[i+1]<<endl;
                                break;
                            }
                        }
                    }
                }
                else{
                    for(int i=z2+1;i<n-1;i++){
                        if((arr[z1]+arr[z2]+arr[i])>arr[i+1]){
                            flag = true;
                            cout<<arr[z1]<<" "<<arr[z2]<<" "<<arr[i]<<" "<<arr[i+1]<<endl;
                            break;
                        }
                        else flag = false;
                    }
                }
            }
        }
        if(!flag){
            cout<<-1<<endl;
        }
    }
}