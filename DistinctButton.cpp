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
        bool z1=false,z2=false,z3=false,z4=false,z5=false,z6=false;
        for(int i=0;i<n;i++){
            if(arr[i][0]>0){
                z1=true;
            }
            else if(arr[i][0]<0){
                z2=true;
            }
            else{
                z3=true;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i][1]>0){
                z4=true;
            }
            else if(arr[i][1]<0){
                z5=true;
            }
            else{
                z6=true;
            }
        }
        if(((z3||z1||z2)&&(((z4||z6)&&(!z5))||((z5||z6)&&(!z4))))||((z5||z6||z4)&&(((z1||z3)&&(!z2))||((z2||z3)&&(!z1))))){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
}