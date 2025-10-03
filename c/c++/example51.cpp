// 0 & 1 triangle
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows: ";
    cin>>n;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            int z = i + j;
            if(z % 2 == 0) {
                cout<<"1 ";
            }
            else {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}