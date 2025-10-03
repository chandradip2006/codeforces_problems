#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k;
        cin>>n>>k;
        char arr1[n][n];
        char arr2[n/k][n/k];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr1[i][j];
            }
        }
        int z1=0;
        for(int i=0;i<n;i=i+k){
            int z2=0;
            for(int j=0;j<n;j=j+k){
                arr2[z1][z2]=arr1[i][j];
                z2++;
            }
            z1++;
        }
        for(int i=0;i<n/k;i++){
            for(int j=0;j<n/k;j++){
                cout<<arr2[i][j];
            }
            cout<<endl;
        }
        t--;
    }
}