#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n][2];
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                cin>>arr[i][j];
            }
        }
        int arr1[n],count=0;
        for(int i=0;i<n;i++){
            if(arr[i][0]<=10){
                arr1[count]=i;
                count++;
            }
        }
        int z=arr[arr1[0]][1];
        for(int i=0;i<count;i++){
            if(z<arr[arr1[i]][1]){
                z=arr[arr1[i]][1];
            }
        }
        int z1;
        for(int i=0;i<count;i++){
            if(z==arr[arr1[i]][1]){
                z1=arr1[i];
                break;
            }
        }
        cout<<z1+1<<endl;
        t--;
    }
}