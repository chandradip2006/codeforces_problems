#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int sum1=0, sum2=0 , count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                sum1=sum1+arr[i][k];
            }
            for(int k=0;k<n;k++){
                sum2=sum2+arr[k][j];
            }
            if(sum2>sum1){
                count++;
                sum1=0,sum2=0;
            }
            else{
                sum1=0,sum2=0;
            }
        }
    }
    cout<<count<<endl;
}