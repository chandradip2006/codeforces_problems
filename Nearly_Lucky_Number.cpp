#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int ld;
    int count=0;
    while(n>0){
        ld=n%10;
        if(ld==4||ld==7){
            count++;
        }
        n=n/10;
    }
    if(count==4||count==7){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}