#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%3==0){
            if(i%5==0){
            cout<<"Welcome to FPC ";
            }
            else{
            cout<<"PClub ";
            }
        }
        else if(i%5==0){
            cout<<"IITK ";
        }
        else {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}