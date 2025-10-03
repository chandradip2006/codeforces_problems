// alphabet triangle
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows: ";
    cin>>n;
    int z;
    for(int i = 1 ; i <= n ; i++){
        for(int j = (n - i) ; j >= 1 ; j-- ){
            cout<<"  ";
        }
        for(int k = 0 ; k < 2*i - 1 ; k++){
            z = 65 + k;
            char ch = (char) z;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}