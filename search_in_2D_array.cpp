#include<iostream>
using namespace std;
int binary(int a[] , int p ,int q, int tar){
    if(p>q){
        return 0;
    }
    else{
        int mid = (p+q)/2;
        if(a[mid]==tar){
            return 1;
        }
        else if(a[mid]>tar){
            return binary(a,p,mid-1,tar);
        }
        else{
            return binary(a,mid+1,q,tar);
        }
    }
}
int main(){
    int n , m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int tar;
    cin>>tar;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(tar>=arr[i][0]&&arr[i][m-1]>=tar){
            int a[m];
            for(int j=0;j<m;j++){
                a[j]=arr[i][j];
            }
            if(binary(a,0 , m ,tar)){
                    flag=true;
                    break;
            }
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}