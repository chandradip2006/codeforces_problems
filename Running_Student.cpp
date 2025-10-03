#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n , v1 , v2;
    cin>>n>>v1>>v2;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x , y;
    cin>>x>>y;
    float d[n];
    for(int i=0;i<n;i++){
        d[i]=(sqrt((pow(arr[i]-x,2))+pow(y,2)))/v2+(float)arr[i]/v1;
    }
    float z=d[1];
    int idx=1;
    for(int i=2 ; i< n;i++){
        if(d[i]<=z){
            z=d[i];
            idx=i;
        }
    }
    cout<<idx+1<<endl;
}