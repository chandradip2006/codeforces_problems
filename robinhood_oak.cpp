#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k , count;
        cin>>n>>k;
        int z = n - k;
        if(z%2==0&&n%2!=0){
            count=(n-z)/2+1;
        }
        else{
            count=(n-z)/2;
        }
        if(count%2==0){
                cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
}