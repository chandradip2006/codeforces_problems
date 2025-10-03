#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        if(n<=78&&n>53){
            int z=n-53;
            cout<<(char)('a'+z)<<"zz"<<endl;
        }
        else if(n<=53&&n>28){
            int z=n-28;
            cout<<'a'<<(char)('a'+z)<<'z'<<endl;
        }
        else if(n>3&&n<=28){
            int z=n-3;
            cout<<"aa"<<(char)('a'+z)<<endl;
        }
        else{
            cout<<"aaa"<<endl;
        }
        t--;
    }
}