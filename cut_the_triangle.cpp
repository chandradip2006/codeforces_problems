#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int arr[3][2];
        for(int i=0;i<3;i++){
            for(int j=0;j<2;j++){
                cin>>arr[i][j];
            }
        }
        if(arr[0][0]==arr[1][0]||arr[0][0]==arr[2][0]||arr[2][0]==arr[1][0]){
            if(arr[0][1]==arr[1][1]||arr[0][1]==arr[2][1]||arr[2][1]==arr[1][1]){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else cout<<"YES"<<endl;
        t--;
    }
}