#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch[n+1];
    cin>>ch;
    if(n%2==0){
        for(int i=0;i<n-2;i+=2){
            for(int j=i;j<=i+1;j++){
                cout<<ch[j];
            }
            cout<<"-";
        }
        cout<<ch[n-2]<<ch[n-1]<<endl;
    }
    else{
        for(int i=0;i<n-3;i+=2){
            for(int j=i;j<=i+1;j++){
                cout<<ch[j];
            }
            cout<<"-";
        }
        cout<<ch[n-3]<<ch[n-2]<<ch[n-1]<<endl;
    }
}