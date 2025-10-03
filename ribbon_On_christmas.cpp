#include<iostream>
using namespace std;
int Min(int arr[],int z1,int z2){
    int z=arr[z1];
    for(int i=z1;i<z2;i++){
        if(arr[i]<z){
            z=arr[i];
        }
    }
    return z;
}
int main(){
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int z1=0,z2=0;
        bool flag=false;
        for(int j=0;j<n;j++){
            if(arr[j]>0){
                z1=j;
                for(int k=j+1;k<n;k++){
                    if(arr[k]<=0){
                        z2=k;
                        flag=true;
                        break;
                    }
                }
                if(flag==false){
                    z2=n;
                    flag=true;
                }
                break;
            }
        }
        int z=Min(arr,z1,z2);
        for(int l=z1;l<z2;l++){
            arr[l]=arr[l]-z;
        }
        if(flag){
            count++;
        }
    }
    cout<<count<<endl;
}