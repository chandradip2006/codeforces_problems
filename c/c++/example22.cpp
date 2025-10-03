#include<iostream>
using namespace std;
int main(){
    int a , d , n;
    cout<<"enter the first term: ";
    cin>>a;
    cout<<"enter the common difference: ";
    cin>>d;
    cout<<"enter the no of terms in the AP: ";
    cin>>n;
    // for(int i = 0 ; i < n ; i++){
    //     cout<<a + i * d<<endl;
    // }

    for(int i = 1 ; i <= n ; i++){
        cout<<a<<endl;
        a = a + d;
    }
}