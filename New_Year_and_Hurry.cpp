#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int i=1;
    int sum=k+5*i;
    while(sum<=240&&i<=n){
        i++;
        sum=sum+5*i;
    }
    cout<<i-1<<endl;
}