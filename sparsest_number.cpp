#include<iostream>
using namespace std;
int main(){
    long long int z1,z2;
    cin>>z1>>z2;
    long long a= z1,b=z2;
    long long int count1=0,count2=0;
    while(a>0){
        int r=a%2;
        if(r==1){
            count1++;
        }
        a=a/2;
    }
    while(b>0){
        int r=b%2;
        if(r==1){
            count2++;
        }
        b=b/2;
    }
    if(count1>count2){
        cout<<z2<<endl;
    }
    else if(count1==count2){
        if(z1>z2){
            cout<<z2<<endl;
        }
        else cout<<z1<<endl;
    }
    else cout<<z1<<endl;
}