#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p=1;
    while(n>0){
        int a , b;
        cin>>a>>b;
        p=p*(b-a+1);
        n--;
    }
    cout<<p<<endl;
}