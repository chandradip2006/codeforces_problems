#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int sum;
        sum = (n%10)+(n/10);
        cout<<sum<<endl;
        t--;
    }
}