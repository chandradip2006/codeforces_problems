// alphabet triangle
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows: ";
    cin>>n;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j < i ; j++){
            int z = 65 + j;
            char ch = (char) z;
            cout<<ch<<" "; 
        }
        cout<<endl;
    }
}