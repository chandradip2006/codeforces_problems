#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int count=0 , z;
        for(int i=0;i<n;i++){
            if(a[i]<=b[i]){
                count++;
            }
        }
        if(count>1){
            cout<<"NO"<<endl;
        }
        else{
            if(count==0){
                cout<<"YES"<<endl;
            }
            else{
                for(int i=0;i<n;i++){
                    if(a[i]<b[i]){
                        z=i;
                        break;
                    }
                }
                int arr[n-1], count1=0;
                for(int i=0;i<n&&i!=z;i++){
                    arr[count1]=a[i]-b[i];
                    count1++;
                }
                int z1=arr[0];
                for(int i=1;i<n-1;i++){
                    if(arr[i]<z1){
                        z1=arr[i];
                    }
                }
                if(z1<(b[z]-a[z])){
                    cout<<"NO"<<endl;
                }
                else cout<<"YES"<<endl;
            }
        }
    }
}