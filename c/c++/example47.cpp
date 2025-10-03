#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows: ";
    cin>>n;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j <= (n - i) ; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}