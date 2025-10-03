#include<iostream>
using namespace std;
int main(){
    // int l ;
    // cout<<"enter the length of the side of the square: ";
    // cin>>l;
    // for(int i = 0 ; i < l ; i++){
    //     int z = 65 + i;
    //     for(int j = 1 ; j <= l ; j++){
    //         char ch = (char) z;
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }

    int l ;
    cout<<"enter the length of the side of the square: ";
    cin>>l;
    for(int i = 1 ; i <= l ; i++){
        for(int j = 0 ; j < l ; j++){
            int z = 97 + j;
            char ch = (char) z;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}