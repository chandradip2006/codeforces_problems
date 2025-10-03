// hollow rectangle
#include<iostream>
using namespace std;
int main(){
    int l , b;
    cout<<"enter the length: ";
    cin>>l;
    cout<<"enter the breadth: ";
    cin>>b;
    for(int i = 1 ; i <= b ; i++){
        for(int j = 1 ; j <= l ; j++){
            if(i == 1 || j == 1 ||i == b || j == l){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

}
