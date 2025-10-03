#include<iostream>
using namespace std;
int main(){
    int r , c;
    cout<<"enter the no of rows: ";
    cin>>r;
    cout<<"enter the no of columns: ";
    cin>>c;
    for(int i = 1 ; i <= r ; i++){
        for(int j = 1 ; j <= c ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }


}