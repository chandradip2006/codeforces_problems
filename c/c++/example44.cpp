#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the odd no of rows: ";
    cin>>n;
    for(int i = 1 ; i <= n ; i++){
        if(i % 2 != 0){
            for(int j = 1 ; j <= i ; j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        else{
            for(int k = 0 ; k < i ; k++){
                int z = 65 + k;
                char ch = (char) z;
                cout<<ch<<" ";
            }
            cout<<endl;
        }
    }
}