#include<iostream>
using namespace std;
int mod(int x){
    if(x>=0){
        return x;
    }
    else return (-1)*x;
}
int main(){
    int arr[5][5],z1,z2;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                z1=i;
                z2=j;
            }
        }
    }
    cout<<mod(z1-2)+mod(z2-2)<<endl;
}