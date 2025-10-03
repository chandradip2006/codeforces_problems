#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        if(n%2!=0){
            cout<<"NO"<<endl;
            t--;
            continue;
        }
        else{
            cout<<"YES"<<endl;
            int z=n/2;
            for(int i=0;i<z;i++){
                cout<<(char)(65+i)<<(char)(65+i);
            }
            cout<<endl;
        }
        t--;
    }
}