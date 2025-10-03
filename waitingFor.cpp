#include<iostream>
using namespace std;
int main(){
    int n , sum=0;
    cin>>n;
    while(n>0){
        char ch;
        int r;
        cin>>ch>>r;
        if(ch=='P'){
            sum=sum+r;
        }
        else{
            if(r>sum){
                cout<<"YES"<<endl;
                sum=0;
                n--;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                sum=sum-r;
            }
        }
        n--;
    }
}