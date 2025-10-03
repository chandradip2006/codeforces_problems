// rhombus
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of each side of the rhombus: ";
    cin>>n;
    for(int i = 1 ; i <= n ; i++){
        for(int j = n; j > i ; j--){
            cout<<"  ";
        }
        for(int k = 1 ; k <= n ; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}