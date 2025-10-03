#include<iostream>
using namespace std;
int main(){
    int a , r , n;
    cout<<"enter the first term: ";
    cin>>a;
    cout<<"enter the common ratio: ";
    cin>>r;
    cout<<"enter the no of terms in GP: ";
    cin>>n;
    for(int i = 1 ; i <= n ; i++){
        cout<<a<<endl;
        a *= r;
    }

}