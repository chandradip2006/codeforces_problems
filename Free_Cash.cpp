#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    int c[n] , count1=0;
    int count=1;
    for(int i=0;i<n-1;i++){
        if(arr[i][0]==arr[i+1][0]){
            if(arr[i][1]==arr[i+1][1]){
                count++;
            }
            else{
                c[count1]=count;
                count1++;
                count=1;
            }
        }
        else {
            c[count1]=count;
            count=1;
            count1++;
        }
    }
    c[count1]=count;
    count1++;
    int z=c[0];
    for(int i=1;i<count1;i++){
        if(c[i]>z){
            z=c[i];
        }
    }
    cout<<z<<endl;
}