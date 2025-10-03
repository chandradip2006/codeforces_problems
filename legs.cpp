#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int cow=n/4;
        int chick=(n%4)/2;
        cout<<cow+chick<<endl;
        t--;
    }
}