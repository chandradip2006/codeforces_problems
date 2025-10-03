// solid square
#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"enter the length of the side of the square: ";
    cin>>l;
    for(int i = 1 ; i <= l ; i++){
        for(int j = 1 ; j <= l ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}